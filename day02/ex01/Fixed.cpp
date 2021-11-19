#include "Fixed.hpp"

const int Fixed::m_fractionnalBits = 8;

Fixed::Fixed() : m_rawBits(0)
{
	std::cout << "Default constructor called" << std::endl ;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl ;
	*this = copy;
}

Fixed::Fixed(const int nb)
{
	m_rawBits = nb << m_fractionnalBits;
}

Fixed::Fixed(const float nb)
{
	m_rawBits = roundf(nb * (1 << m_fractionnalBits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl ;
}

float Fixed::toFloat(void) const
{
	return ((float)m_rawBits / (1 << m_fractionnalBits));
}

int Fixed::toInt(void) const
{
	return (m_rawBits >> m_fractionnalBits);
}

Fixed			&Fixed::operator=(const Fixed &assigned)
{
	std::cout << "Assignation operator called" << std::endl ;
	this->m_rawBits = assigned.getRawBits();
	return (*this);
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl ;
	return (m_rawBits);
}

void			Fixed::setRawBits(int const value)
{
	std::cout << "setRawBits member function called" << std::endl ;
	m_rawBits = value;
}

std::ostream &operator<<(std::ostream &flux, Fixed const &rhs)
{
	flux << rhs.toFloat();
	return (flux);
}