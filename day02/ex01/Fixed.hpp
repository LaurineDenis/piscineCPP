# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :

	Fixed(void);
	Fixed(int const nb);
	Fixed(float const nb);
	Fixed(Fixed const &src);
	~Fixed(void);

	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void)const;
	int				toInt(void)const;
	Fixed&			operator=(Fixed const &rhs);
	Fixed&  		operator>(Fixed const &rhs);
	Fixed&  		operator<(Fixed const &rhs);
	Fixed&  		operator>=(Fixed const &rhs);
	Fixed&  		operator<=(Fixed const &rhs);
	Fixed&  		operator==(Fixed const &rhs);
	Fixed&  		operator!=(Fixed const &rhs);


	private :

	int					_raw;
	static const int	_bits_raw;
};

std::ostream&	operator<<(std::ostream& o, Fixed const &i);

#endif