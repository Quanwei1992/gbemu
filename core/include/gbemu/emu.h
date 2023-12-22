#pragma once

#include <gbemu/common.h>

typedef struct {
	bool pasued;
	bool running;
	u64 ticks;
} emu_context;

int emu_run(const char* rom_path);

emu_context* emu_get_context();

