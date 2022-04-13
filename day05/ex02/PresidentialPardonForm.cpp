#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form(), _target("Default")
{
	// std::cout << "Constructor PresidentialPardonForm by default called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	// std::cout << "Constructor PresidentialPardonForm " << _name << " called at the grade :" << grade << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
	// std::cout << "Constructor PresidentialPardonForm by copy called" << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// std::cout << "Destructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
    if (this->_target != src._target)
    	this->_target = src._target;
	return (*this);
}

void        PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << this->_target << " was forgiven by Zaphod Beeblebrox." << std::endl;
}
