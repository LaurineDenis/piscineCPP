#include "Form.hpp"

Form::Form(void) : _name("Default"), _isSigned(false), _gradeToSign(1), _gradeToExec(1)
{
	// std::cout << "Constructor Form by default called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) :  _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    if (this->_gradeToExec < 1 || this->_gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (this->_gradeToExec > 150 || this->_gradeToSign > 150)
        throw Form::GradeTooLowException();
	// std::cout << "Constructor Form " << _name << " called at the grade :" << grade << std::endl;
}

Form::Form(Form const &src)
{
	// std::cout << "Constructor Form by copy called" << std::endl;
	*this = src;
}

Form::~Form(void)
{
	// std::cout << "Destructor Form called" << std::endl;
}

Form	&Form::operator=(Form const &src)
{
    if (this->_name != src._name)
    	this->_name = src._name;
    if (this->_gradeToSign != src._gradeToSign)
        this->_gradeToSign = src._gradeToSign;
    if (this->_gradeToExec != src._gradeToExec)
        this->_gradeToExec = src._gradeToExec;
    if (this->_isSigned != src._isSigned)
        this->_isSigned = src._isSigned;
	return (*this);
}

std::string Form::getName() const
{
    return this->_name;
}

int         Form::getGradeToSign() const
{
    return this->_gradeToSign;
}

int         Form::getGradeToExec() const
{
    return this->_gradeToExec;
}

bool         Form::getIsSigned() const
{
    return this->_isSigned;
}

const char  *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is to high");
}

const char  *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is to low");
}

std::ostream &operator<<(std::ostream &o, Form const &n)
{
    o << n.getName() << " Form, gradeToSign : " << n.getGradeToSign() << " gradeToExec : " << n.getGradeToExec() << ". Signed ? " << n.getIsSigned();
    return o;
}

void         Form::beSigned(Bureaucrat &bubu)
{
    if (bubu.getGrade() <= this->_gradeToSign)
    {
        this->_isSigned = true;
		std::cout << bubu.getName() << " signed " << this->_name << std::endl;
        bubu.signForm(*this);
    }
    else
    {
        bubu.signForm(*this);
        throw Form::GradeTooLowException();
    }
}