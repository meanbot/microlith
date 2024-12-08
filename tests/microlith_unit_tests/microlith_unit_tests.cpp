//            _                _ _ _   _     
//  _ __ ___ (_) ___ _ __ ___ | (_) |_| |__  
// | '_ ` _ \| |/ __| '__/ _ \| | | __| '_ \   microlith - systray launcher & tool
// | | | | | | | (__| | | (_) | | | |_| | | |  ------------------------------------------
// |_| |_| |_|_|\___|_|  \___/|_|_|\__|_| |_|  https://github.com/meanbot/microlith
// 
// SPDX-FileCopyrightText: 2024 meanbot <https://github.com/meanbot>
// SPDX-License-Identifier: MIT

#include <fmt/core.h>
#include <catch2/catch_all.hpp>


CATCH_TEST_CASE("test", "")
{
	CATCH_REQUIRE(1 == 1);
}

int main(int argc, char *argv[])
{
	int   result = Catch::Session().run(argc, argv);

	return result;
}
