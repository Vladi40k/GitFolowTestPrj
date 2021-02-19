#include <iostream>

int main(int agrc, char* argv[])
{
	for (size_t i = 0; i < agrc; i++)
	{
		// show argument value in console
		std::cout << argv[i] << std::endl;
	}
	return 0;
}