#include "gbemu/emu.h"


int main(int argc, const char** argv)
{
    if (argc < 2) {
        printf("Usage: emu <rom_file>\n");
        return -1;
    }

    const char* rom = argv[1];

	return emu_run(rom);
}