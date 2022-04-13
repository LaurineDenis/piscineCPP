#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

class Intern
{
	public:

			Intern(void);
			Intern(Intern const &src);
			~Intern(void);

			Intern	        &operator=(Intern const &src);
            Form            *makeForm(std::string form, std::string target);
};

#endif