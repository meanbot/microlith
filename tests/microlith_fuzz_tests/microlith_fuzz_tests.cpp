//            _                _ _ _   _     
//  _ __ ___ (_) ___ _ __ ___ | (_) |_| |__  
// | '_ ` _ \| |/ __| '__/ _ \| | | __| '_ \   microlith - systray launcher & tool
// | | | | | | | (__| | | (_) | | | |_| | | |  ------------------------------------------
// |_| |_| |_|_|\___|_|  \___/|_|_|\__|_| |_|  https://github.com/meanbot/microlith
// 
// SPDX-FileCopyrightText: 2024 meanbot <https://github.com/meanbot>
// SPDX-License-Identifier: MIT

#include <cstdint>
#include <fmt/core.h>


extern "C" int LLVMFuzzerInitialize(int *argc, char ***argv)
{
	(void) argc;
	(void) argv;

	return 0;
}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t data_size)
{
	(void) data;
	(void) data_size;

	return 0;
}
