#include <iostream>
#include <fstream>
#include "Karen.hpp"

int	main(void)
{
	std::string	line;
	Karen		karen;

	while (std::getline(std::cin, line))
		karen.complain(line);
}