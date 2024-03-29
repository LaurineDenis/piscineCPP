#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{}

void	Karen::complain(std::string _level)
{
	void		(Karen::*function[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	for (i = 0; i < 4; i++)
	{
		if (level[i] == _level)
			break ;
	}
	switch (i)
	{
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		case 0:
			(this->*function[0])();
		case 1:
			(this->*function[1])();
		case 2:
			(this->*function[2])();
		case 3:
			(this->*function[3])();
		default :
			return ;
	}
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << " I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it! " << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << " I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it! " << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << " I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month. " << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << " This is unacceptable, I want to speak to the manager now. " << std::endl;
}