#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:

		Fixed();					//Default
		Fixed(const Fixed &copy);	//Copy

		Fixed(const int nb);
		Fixed(const float nb);
		
		//Destructors
		~Fixed(void);

		//Operator Overload
		Fixed				&operator=(const Fixed &assigned);

		bool				operator==(const Fixed &rhs) const;
		bool				operator!=(const Fixed &rhs) const;
		bool				operator<(const Fixed &rhs) const;
		bool				operator<=(const Fixed &rhs) const;
		bool				operator>(const Fixed &rhs) const;
		bool				operator>=(const Fixed &rhs) const;

		void				operator+=(const Fixed &rhs);			//ShortSum
		void				operator-=(const Fixed &rhs);			//ShortSub
		void				operator/=(const Fixed &rhs);			//ShortDivison
		void				operator*=(const Fixed &rhs);			//ShortMultiplication

		Fixed				operator+(const Fixed &rhs) const;		//Sum
		Fixed				operator-(const Fixed &rhs) const;		//Sub
		Fixed				operator/(const Fixed &rhs) const;		//Division
		Fixed				operator*(const Fixed &rhs) const;		//Multiplication
		
		Fixed				&operator++(void);							//Pre-Increment
		Fixed				&operator--(void);							//Pre-Decrement
		Fixed				operator++(int);						//Post-Increment
		Fixed				operator--(int);						//Post-Decrement

		//Methods Not Member Overload
		static Fixed				&min(Fixed &a, Fixed &b);
		static const Fixed			&min(Fixed const &a, Fixed const &b);
		static Fixed				&max(Fixed &a, Fixed &b);
		static const Fixed			&max(Fixed const &a, Fixed const &b);

		//Getters
		int					getRawBits(void) const;
		
		//Setters
		void				setRawBits(int const valu0e);
		
		//Convertions
		float				toFloat() const;
		int					toInt() const;

	private:

		int							m_rawBits;
		static const int			m_fractionnalBits;
};

//Overload flux operator
std::ostream &operator<<(std::ostream &flux, Fixed const &rhs);		//Overload <<

#endif