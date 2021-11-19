#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed(void);
		Fixed				&operator=(const Fixed &assigned);
		int					getRawBits(void) const;
		void				setRawBits(int const valu0e);
		float				toFloat() const;
		int					toInt() const;

	private:
		int							m_rawBits;
		static const int			m_fractionnalBits;
};

std::ostream &operator<<(std::ostream &flux, Fixed const &rhs);

#endif