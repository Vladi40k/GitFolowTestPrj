#include <iostream>
#include <algorithm>

int main(int agrc, char* argv[])
{
	std::for_each(argv, (argv + agrc), [](const char* argument)
		{
			std::cout << argument << std::endl;
		});

	return 0;
}