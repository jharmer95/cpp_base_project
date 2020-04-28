#include "printer.hpp"
#include "version.hpp"

#include <iostream>

int Print(const char* str)
{
	if (*str == '\0')
	{
		return -1;
	}

	std::cout << str;
	return 0;
}

void PrintVersion()
{
	std::cout << VERSION_STR << '\n';
}
