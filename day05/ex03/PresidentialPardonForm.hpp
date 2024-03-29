#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:

			PresidentialPardonForm(void);
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm(PresidentialPardonForm const &src);
			~PresidentialPardonForm(void);

			PresidentialPardonForm	&operator=(PresidentialPardonForm const &src);
            void        execute(Bureaucrat const &executor) const;

	private:

			std::string		_target;
};

#endif