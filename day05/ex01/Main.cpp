#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat	bubu("jabinou", 7);
		std::cout << bubu << std::endl;
		bubu.increment(6);
		std::cout << bubu << std::endl;
		Form	fofo("form_1", 10, 5);
		fofo.beSigned(bubu);
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout <<"------------------------------------------"<< std::endl;
	try
	{
		Bureaucrat	bubu("polinou", 6);
		std::cout << bubu << std::endl;
		Form	fofo("form_2", 10, 5);
		fofo.beSigned(bubu);
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout <<"------------------------------------------"<< std::endl;
	try
	{
		Bureaucrat	bubu("pierro", 150);
		std::cout << bubu << std::endl;
		Form	fofo("form_2", 10, 5);
		fofo.beSigned(bubu);
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	// try
	// {
	// 	Bureaucrat	bubu("jab", 150);
	// 	bubu.increment(6);
	// 	std::cout << bubu << std::endl;
	// 	bubu.decrement(16);
	// }
	// catch (std::exception const& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// try
	// {
	// 	Bureaucrat	bubu("jabl", 151);

	// }
	// catch (std::exception const& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }


	
	return 0;
}