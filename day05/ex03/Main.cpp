#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	try
	{	
		std::cout <<"------------------------------------------"<< std::endl;
		Intern RobotomyRequestForm;
		Form* llll;
		llll = RobotomyRequestForm.makeForm("RobotomyRequestForm", "Bender");
		Bureaucrat	lu_3("gougus_3", 65);
		std::cout << lu_3 << std::endl;
		lu_3.decrement(3);
		llll->beSigned(lu_3);
		lu_3.executeForm(*llll);
		
	}
 	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout <<"------------------------------------------"<< std::endl;
		Intern ShrubberyCreationForm;
		Form* pppp;
		pppp = ShrubberyCreationForm.makeForm("ShrubberyCreationForm", "Bender");
		Bureaucrat	lu("ttttt_3", 1);
		std::cout << lu << std::endl;
		lu.decrement(3);
		pppp->beSigned(lu);
		lu.executeForm(*pppp);
		
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout <<"------------------------------------------"<< std::endl;
		Intern PresidentialPardonForm;
		Form* cccc;
		cccc = PresidentialPardonForm.makeForm("PresidentialPardonForm", "Bender");
		Bureaucrat	puuuu("jpp", 150);
		std::cout << puuuu << std::endl;
		puuuu.decrement(3);
		cccc->beSigned(puuuu);
		puuuu.executeForm(*cccc);
		
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}