#include <gbemu/cpu.h>
#include <gbemu/emu.h>

static void proc_none(cpu_context* ctx)
{
	printf("INVALID INSTRUCTION!\n");
	exit(-1);
}

static void proc_ld(cpu_context* ctx)
{
	// TODO...
}

static bool check_cond(cpu_context* ctx)
{
	bool z = CPU_FLAG_Z;
	bool c = CPU_FLAG_C;
	switch (ctx->cur_inst->cond)
	{
		case 
	default:
		break;
	}
}
static void proc_jp(cpu_context* ctx)
{
	if (check_cond(ctx))
	{
		ctx->regs.pc = ctx->fetched_data;
		emu_cycles(1);
	}
}

static IN_PROC processors[] = {
	[IN_NONE] = proc_none,
	[IN_LD] = proc_ld,
	[IN_JP] = proc_jp,
};