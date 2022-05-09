#include "Intern.hpp"

Intern::Intern(void)
{
	// std::cout << "Constructor Intern by default called" << std::endl;
}

Intern::Intern(Intern const &src)
{
	// std::cout << "Constructor Intern by copy called" << std::endl;
	if (this != &src)
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

Form*	Intern::_newPresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form*	Intern::_newRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form*	Intern::_newShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string form, std::string target)
{
    std::string		str[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	Form			*(Intern::*function[])(std::string target) = {&Intern::_newShrubberyCreationForm, &Intern::_newRobotomyRequestForm, &Intern::_newPresidentialPardonForm};
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
            return ((this->*function[i])(target));
        }
        case 1:
        {
            std::cout << "Intern creates " << form << std::endl;
            return ((this->*function[i])(target));
        }
        case 2:
        {
            std::cout << "Intern creates " << form << std::endl;
            return ((this->*function[i])(target));
        }
        default :
        {
            std::cout << "Invalid Form " << std::endl;
            return NULL;
        }
    }
}