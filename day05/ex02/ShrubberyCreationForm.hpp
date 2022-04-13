#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:

			ShrubberyCreationForm(void);
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(ShrubberyCreationForm const &src);
			~ShrubberyCreationForm(void);

			ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &src);
            void        execute(Bureaucrat const &executor) const;

	private:

			std::string		_target;
};

#endif