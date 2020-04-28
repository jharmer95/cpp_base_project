#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "printer.hpp"

TEST_CASE("Test case 1", "[]")
{
	const int result = Print("Hello, world!\n");
	REQUIRE(result == 0);
}

TEST_CASE("Test case 2", "[!shouldfail]")
{
	const int result = Print("\0Hello, world!\n");
	REQUIRE(result == 0);
}

TEST_CASE("Print version", "[]")
{
	PrintVersion();
}
