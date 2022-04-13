#include "Intern.hpp"

Intern::Intern(void)
{
	// std::cout << "Constructor Intern by default called" << std::endl;
}

Intern::Intern(Intern const &src)
{
	// std::cout << "Constructor Intern by copy called" << std::endl;
	*this = src;
}

Intern::~Intern(void)
{
	// std::cout << "Destructor Intern called" << std::endl;
}

Intern	&Intern::operator=(Intern const &src)
{
    if (this != &src)
        *this = src;
	return (*this);
}

Form *Intern::makeForm(std::string form, std::string target)
{
    std::string  str[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;
    while (i < 3)
    {
        if (form == str[i])
            break;
        i++;
    }
    switch (i)
    {
        case 0:
        {
            std::cout << "Intern creates " << form << std::endl;
            return (new ShrubberyCreationForm(target));
        }
        case 1:
        {
            std::cout << "Intern creates " << form << std::endl;
            return (new RobotomyRequestForm(target));
        }
        case 2:
        {
            std::cout << "Intern creates " << form << std::endl;
            return (new PresidentialPardonForm(target));
        }
        default :
        {
            std::cout << "Invalid Form " << std::endl;
            return NULL;
        }
    }
}