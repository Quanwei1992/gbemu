#include "gbemu/emu.h"
#include "gbemu/cart.h"
#include "gbemu/cpu.h"

/*
*  Emu components
*  |Cart|
*  |CPU|
*  |Address Bus|
*  |PPU|
*  |TIMER|
*/

static emu_context ctx;

void delay(u32 ms)
{
	_sleep(ms);
}

int emu_run(const char* rom_path)
{
	if (!cart_load(rom_path))
	{
		printf("Failed to load ROM file: %s\n", rom_path);
		return -1;
	}

	printf("Cart loaded..\n");

	cpu_init();
	ctx.running = true;
	ctx.pasued = false;
	ctx.ticks = 0;

	while (ctx.running)
	{
		if (ctx.pasued)
		{
			delay(10);
			continue;
		}

		if (!cpu_step())
		{
			printf("CPU Stopped\n");
			return -2;
		}
		ctx.ticks++;
	}
	return 0;
}

emu_context* emu_get_context()
{
	return &ctx;
}
