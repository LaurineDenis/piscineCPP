#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << "LES BONS GRADES"<< std::endl;
	try
	{
		Bureaucrat	bubu("jabinou", 7);
		std::cout << bubu << std::endl;
		bubu.increment(6);
		std::cout << bubu << std::endl;
		Form* pardon = new PresidentialPardonForm("pardon");
		pardon->beSigned(bubu);
		bubu.executeForm(*pardon);


	std::cout <<"------------------------------------------"<< std::endl;
		Bureaucrat	truc("polinou", 144);
		std::cout << truc << std::endl;
		truc.increment(10);
		std::cout << truc << std::endl;
		Form* arbre = new ShrubberyCreationForm("arbre");
		arbre->beSigned(truc);
		truc.executeForm(*arbre);
	
	std::cout <<"------------------------------------------"<< std::endl;
		Bureaucrat	lu("gougus", 5);
		std::cout << lu << std::endl;
		lu.increment(1);
		std::cout << lu << std::endl;
		Form* bruit = new RobotomyRequestForm("bruit");
		bruit->beSigned(lu);
		lu.executeForm(*bruit);
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout <<"------------------------------------------"<< std::endl;
	std::cout << "LES BONS GRADES POUR SIGNER MAIS PAS EXECUTION"<< std::endl;
	try
	{
	std::cout <<"------------------------------------------"<< std::endl;
		Bureaucrat	bubu_2("jabinou_2", 24);
		std::cout << bubu_2 << std::endl;
		bubu_2.decrement(1);
		std::cout << bubu_2 << std::endl;
		Form* pardon_2 = new PresidentialPardonForm("pardon_2");
		pardon_2->beSigned(bubu_2);
		bubu_2.executeForm(*pardon_2);
		
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
	std::cout <<"------------------------------------------"<< std::endl;
		Bureaucrat	truc_2("polinou_2", 38);
		std::cout << truc_2 << std::endl;
		truc_2.decrement(100);
		std::cout << truc_2 << std::endl;
		Form* arbre_2 = new ShrubberyCreationForm("arbre_2");
		arbre_2->beSigned(truc_2);
		truc_2.executeForm(*arbre_2);
		
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{
	std::cout <<"------------------------------------------"<< std::endl;
		Bureaucrat	lu_2("gougus_2", 38);
		std::cout << lu_2 << std::endl;
		lu_2.decrement(8);
		std::cout << lu_2 << std::endl;
		Form* bruit_2 = new RobotomyRequestForm("bruit_2");
		bruit_2->beSigned(lu_2);
		lu_2.executeForm(*bruit_2);
	
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout <<"------------------------------------------"<< std::endl;
	std::cout << "LES MAUVAIS GRADES POUR SIGNER DONC PAS EXECUTION"<< std::endl;
	try
	{
	std::cout <<"------------------------------------------"<< std::endl;
		Bureaucrat	bubu_3("jabinou_3", 144);
		std::cout << bubu_3 << std::endl;
		Form* pardon_3 = new PresidentialPardonForm("pardon_3");
		pardon_3->beSigned(bubu_3);
		bubu_3.executeForm(*pardon_3);
	
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{

	std::cout <<"------------------------------------------"<< std::endl;
		Bureaucrat	truc_3("polinou_3", 144);
		std::cout << truc_3 << std::endl;
		truc_3.decrement(3);
		std::cout << truc_3 << std::endl;
		Form* arbre_3 = new ShrubberyCreationForm("arbre_3");
		arbre_3->beSigned(truc_3);
		truc_3.executeForm(*arbre_3);

	
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{
	std::cout <<"------------------------------------------"<< std::endl;
		Bureaucrat	lu_3("gougus_3", 80);
		std::cout << lu_3 << std::endl;
		lu_3.decrement(3);
		std::cout << lu_3 << std::endl;
		Form* bruit_3 = new RobotomyRequestForm("bruit_3");
		// bruit_3->beSigned(lu_3);
		lu_3.executeForm(*bruit_3);
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}