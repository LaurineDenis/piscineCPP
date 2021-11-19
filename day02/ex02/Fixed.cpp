#include "Fixed.hpp"

const int Fixed::m_fractionnalBits = 8;

//Constructors
Fixed::Fixed() : m_rawBits(0)
{
}

Fixed::Fixed(const Fixed &copy)
{
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

//Destructor
Fixed::~Fixed(void)
{
}

//Convertions
float Fixed::toFloat(void) const
{
	return ((float)m_rawBits / (1 << m_fractionnalBits));
}

int Fixed::toInt(void) const
{
	return (m_rawBits >> m_fractionnalBits);
}

//Overload Operator
Fixed			&Fixed::operator=(const Fixed &assigned)
{
	this->m_rawBits = assigned.getRawBits();
	return (*this);
}

bool			Fixed::operator==(const Fixed &rhs) const
{
	return (m_rawBits == rhs.getRawBits());
}

bool			Fixed::operator!=(const Fixed &rhs) const
{
	return (m_rawBits != rhs.getRawBits());
}

bool			Fixed::operator<(const Fixed &rhs) const
{
	return (m_rawBits < rhs.getRawBits());
}

bool			Fixed::operator<=(const Fixed &rhs) const
{
	return (m_rawBits <= rhs.getRawBits());
}

bool			Fixed::operator>(const Fixed &rhs) const
{
	return (m_rawBits > rhs.getRawBits());
}

bool			Fixed::operator>=(const Fixed &rhs) const
{
	return (m_rawBits >= rhs.getRawBits());
}

void			Fixed::operator+=(const Fixed &rhs)
{
	m_rawBits += rhs.getRawBits();
}

void			Fixed::operator-=(const Fixed &rhs)
{
	m_rawBits -= rhs.getRawBits();
}

void			Fixed::operator*=(const Fixed &rhs)
{
	*this = Fixed(this->toFloat() * rhs.toFloat());
}

void			Fixed::operator/=(const Fixed &rhs)
{
	*this = Fixed(this->toFloat() / rhs.toFloat());
}

Fixed			Fixed::operator+(const Fixed &rhs) const
{
	Fixed result(*this);

	result.m_rawBits += rhs.getRawBits();
	return (result);
}

Fixed			Fixed::operator-(const Fixed &rhs) const
{
	Fixed result(*this);

	result.m_rawBits -= rhs.getRawBits();
	return (result);
}

Fixed			Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed			Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed			&Fixed::operator++(void)
{
	this->m_rawBits++;
	return (*this);
}

Fixed			&Fixed::operator--(void)
{
	this->m_rawBits--;
	return (*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed buf(*this);
	operator++();
	return (buf);
}

Fixed			Fixed::operator--(int)
{
	Fixed buf(*this);
	operator--();
	return (buf);
}

Fixed			&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed		&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed			&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const			Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

//Getters
int				Fixed::getRawBits(void) const
{
	return (m_rawBits);
}

//Setters
void			Fixed::setRawBits(int const value)
{
	m_rawBits = value;
}

//Overload flux operator
std::ostream &operator<<(std::ostream &flux, Fixed const &rhs)
{
	flux << rhs.toFloat();
	return (flux);
}