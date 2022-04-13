#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
	public:

			Bureaucrat(void);
			Bureaucrat(std::string name, int grade);
			Bureaucrat(Bureaucrat const &src);
			~Bureaucrat(void);

			Bureaucrat	&operator=(Bureaucrat const &src);
            std::string getName() const;
            int         getGrade() const;

            class       GradeTooHighException : public std::exception {
                virtual const char *what() const throw();
            };
            class       GradeTooLowException : public std::exception {
                virtual const char *what() const throw();
            };

            int         increment(int i);
            int         decrement(int i);
	private:

			std::string		_name;
		    int 	    	_grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &n);
#endif