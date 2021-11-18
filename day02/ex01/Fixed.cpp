#include "Fixed.hpp"

const int	Fixed::_bits_raw = 8;

Fixed::Fixed(void)
{
	this->_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	_raw = src._raw;
	*this = src;
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	_raw = nb << this->_bits_raw;
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	_raw = roundf(nb * (1 << this->_bits_raw));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int				Fixed::getRawBits() const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return ((float)this->_raw / (float)(1 << this->_bits_raw));
}

void			Fixed::setRawBits(int const raw) 
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = (float)(raw * (1 << this->_bits_raw));
}

float			Fixed::toFloat(void)const
{
	return ((float)this->_raw / (float)(1 << this->_bits_raw));
}

int				Fixed::toInt(void)const
{
	return ((int)this->_raw / (int)(1 << this->_bits_raw));
}

Fixed&  Fixed::operator=(Fixed const &rhs)
{
	this->_raw = rhs._raw;
	return (*this);
}

Fixed&  Fixed::operator>(Fixed const &rhs)
{
	this->_raw = rhs._raw;
	return (*this);
}

Fixed&  Fixed::operator<(Fixed const &rhs)
{
	this->_raw = rhs._raw;
	return (*this);
}

Fixed&  Fixed::operator>=(Fixed const &rhs)
{
	this->_raw = rhs._raw;
	return (*this);
}

Fixed&  Fixed::operator<=(Fixed const &rhs)
{
	this->_raw = rhs._raw;
	return (*this);
}

Fixed&  Fixed::operator==(Fixed const &rhs)
{
	this->_raw = rhs._raw;
	return (*this);
}

Fixed&  Fixed::operator!=(Fixed const &rhs)
{
	this->_raw = rhs._raw;
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}