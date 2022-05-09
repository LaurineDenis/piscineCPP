#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150)
{
	// std::cout << "Constructor Bureaucrat by default called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) :  _name(name), _grade(grade)
{
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
	// std::cout << "Constructor Bureaucrat " << _name << " called at the grade :" << grade << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	// std::cout << "Constructor Bureaucrat by copy called" << std::endl;
	if (this != &src)
        *this = src;
}

Bureaucrat::~Bureaucrat(void)
{
	// std::cout << "Destructor Bureaucrat called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
    if (this != &src)
        this->_grade = src._grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int         Bureaucrat::getGrade() const
{
    return this->_grade;
}


int         Bureaucrat::increment(int i)
{
    if (this->_grade - i < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = this->_grade - i;
    return this->_grade;
}

int         Bureaucrat::decrement(int i)
{
    if (this->_grade + i > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = this->_grade + i;
    return this->_grade;
}

const char  *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is to high");
}

const char  *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is to low");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &n)
{
    o << n.getName() << ", bureaucrat grade " << n.getGrade();
    return o;
}