#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : Form(), _target("Default")
{
	// std::cout << "Constructor RobotomyRequestForm by default called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	// std::cout << "Constructor RobotomyRequestForm " << _name << " called at the grade :" << grade << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
	// std::cout << "Constructor RobotomyRequestForm by copy called" << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// std::cout << "Destructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    if (this->_target != src._target)
    	this->_target = src._target;
	return (*this);
}

void        RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout <<"Brrrrrrrrrrrrrrrrrrrr Brrrrrrrrrrr" << std::endl;
    srand(time(NULL));
    int i = rand() % 2;
    if (i == 0)
        std::cout << this->_target << " good robotomize." << std::endl;
    else if (i == 1)
        std::cout << this->_target << " echec robotomize." << std::endl;
}
