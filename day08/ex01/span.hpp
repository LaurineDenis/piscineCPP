#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <numeric>
# include <exception>

class Span
{
	public:

			Span(void);
			Span(unsigned int n);
			Span(Span const &src);
			~Span(void);

			Span		    &operator=(Span const &src);
            void            addNumber(unsigned const n);
			void			addNumber(std::vector<int>::iterator firstNumber, std::vector<int>::iterator lastNumber);
            unsigned int    shortestSpan();
            unsigned int    longestSpan();
            
            class			Limits :  public std::exception {
                virtual const char *what() const throw ();
            };
			class			NoSpace :  public std::exception {
                virtual const char *what() const throw ();
            };

	private :
            unsigned int        _n;
            std::vector<int>    *_tab;
};

#endif