#include <iostream>
#include <algorithm>


void showArgCnt(int cnt) 
{
	std::cout << "arg cnt: " << cnt << std::endl;
}

int main(int agrc, char* argv[])
{
	std::for_each(argv, (argv + agrc), [](const char* argument)
		{
			std::cout << argument << std::endl;
			std::cout << "abracadabra!!!" << std::endl;
		});

	showArgCnt(agrc);

	return 0;
}