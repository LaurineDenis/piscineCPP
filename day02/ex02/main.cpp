#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const e(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << e << std::endl;
	std::cout << Fixed::max(a, e) << std::endl;
	return 0;
}