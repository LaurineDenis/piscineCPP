#include "Fixed.hpp"

const int	Fixed::_bits_raw = 8;

Fixed::Fixed(void)
{
    this->_raw = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    _raw = src._raw;
    *this = src;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const &rhs)
{
    this->_raw = rhs.getRawBits();
    std::cout << "Assignation operator called" << std::endl;
    return (*this);
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_raw = raw;
}

