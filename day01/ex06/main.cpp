#include <iostream>
#include <fstream>
#include "Karen.hpp"

int	main(void)
{
	std::string	line;
	Karen		karen;

	std::cout << "\nEnter DEBUG INFO WARNING ERROR\n" << std::endl;
	while (std::getline(std::cin, line))
	{
		karen.complain(line);
		std::cout << "\nEnter DEBUG INFO WARNING ERROR\n" << std::endl;
	}
}