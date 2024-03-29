#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:

			Form(void);
			Form(std::string const name, int const gradeToSign, int const gradeToExec);
			Form(Form const &src);
			~Form(void);

			Form	&operator=(Form const &src);
            std::string getName() const;
            int         getGradeToSign() const;
            int         getGradeToExec() const;
            bool        getIsSigned() const;
            void        beSigned(Bureaucrat &bubu);

            class       GradeTooHighException : public std::exception {
                virtual const char *what() const throw();
            };
            class       GradeTooLowException : public std::exception {
                virtual const char *what() const throw();
            };

	private:

			std::string const	_name;
			bool				_isSigned;
			int	const			_gradeToSign;
			int	const			_gradeToExec;
};

std::ostream &operator<<(std::ostream &o, Form const &n);
#endif