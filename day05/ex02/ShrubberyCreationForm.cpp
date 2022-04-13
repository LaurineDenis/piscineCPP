#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form(), _target("Default")
{
	// std::cout << "Constructor ShrubberyCreationForm by default called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	// std::cout << "Constructor ShrubberyCreationForm " << _name << " called at the grade :" << grade << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
	// std::cout << "Constructor ShrubberyCreationForm by copy called" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	// std::cout << "Destructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
    if (this->_target != src._target)
    	this->_target = src._target;
	return (*this);
}

void        ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::string tmp = "_shrubbery";
    std::ofstream filename(this->_target + tmp);
    
    filename << "       # #### ##🍏##        " <<  "\n";
	filename << "      ### \\🍏/#|### |🍏/####" <<  "\n";
	filename << "    ##\\/#/ \\||/##/_/##/_#" <<  "\n";
	filename << "   ###  🍏\\/###|/🍏 \\/ # ###" <<  "\n";
	filename << " ##_\\_#\\_\\## | #/###_/_🍏####" <<  "\n";
	filename << "##🍏 #### # \\ #|🍏 /  🍏#### ##/##" <<  "\n";
	filename << " __#_--###` 🍏 |{,###---###-~    " <<  "\n";
	filename << "    	     	  \\}{     " <<  "\n";
	filename << "    	    	  }}{      " <<  "\n";
	filename << "              }}{     " <<  "\n";
	filename << "              }}{    " <<  "\n";
	filename.close();
}
