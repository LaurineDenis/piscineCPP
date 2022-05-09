#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat	bubu("jabinou", 12);
		std::cout << bubu << std::endl;
		bubu.increment(6);
		std::cout << bubu << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout <<"-----------------Decrement to low-------------------------"<< std::endl;
	try
	{
		Bureaucrat	bubu("jab", 150);
		std::cout << bubu << std::endl;
		bubu.increment(6);
		std::cout << bubu << std::endl;
		bubu.decrement(16);
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout <<"------------------Creation to low------------------------"<< std::endl;
	try
	{
		Bureaucrat	bubu("jabl", 151);
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}