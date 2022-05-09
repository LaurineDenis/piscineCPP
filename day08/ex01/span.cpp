#include "span.hpp"

Span::Span(void) : _n(0)
{
	std::cout << "Constructor Span by default called" << std::endl;
}

Span::Span(unsigned int n) : _n(n)
{
	std::cout << "Constructor Span " << n << " called" << std::endl;
    _tab = new std::vector<int>[n]();
}

Span::Span(Span const &src) : _n(0)
{
	std::cout << "Copy Constructor Span by copy called" << std::endl;
	*this = src;
}

Span::~Span(void)
{
	std::cout << "Destructor Span called" << std::endl;
    delete [] this->_tab;
}

Span		&Span::operator=(Span const &src)
{
	std::cout << "Assignation Span called" << std::endl;
	if (this != &src)
    {
		this->_n = src._n;
		std::cout << "n src = " << src._n << "n this = " << _n << std::endl;
		_tab = new std::vector<int>[_n]();
		for (size_t i = 0; i < src._n; i++)
		{
			this->_tab[i] = src._tab[i];
		}
    }
	return (*this);
}

void	Span::addNumber(unsigned const n)
{
	if (this->_tab->size() < this->_n)
	{
		_tab->push_back(n);
		std::cout << "added = " << n << std::endl;
	}
	else
	{
		throw Span::NoSpace();
	}
}

void	Span::addNumber(std::vector<int>::iterator firstNumber, std::vector<int>::iterator lastNumber)
{
	int	nb;
	nb = lastNumber - firstNumber;
	if (this->_tab->size() + nb < this->_n)
	{
		while (firstNumber != lastNumber)
		{
			this->_tab->push_back(*firstNumber);
			std::cout << "added = " << *firstNumber << std::endl;
			firstNumber++;
		}
		this->_tab->push_back(*lastNumber);
	}
	else
	{
		throw Span::NoSpace();
	}
}
 
unsigned int Span::shortestSpan()
{
    if (this->_n <= 1)
        throw Span::Limits();
	else
	{
		std::vector<int> array(this->_tab->size(), 0);
		std::adjacent_difference(this->_tab->begin(), this->_tab->end(), array.begin());
		std::vector<int>::iterator it;
		for (it = array.begin(); it != array.end(); it++)
		{
			*it = std::abs(*it);
			// std::cout << "it = " << *it << std::endl;
		}
		return (*std::min_element(array.begin() + 1, array.end()));
	}
}

unsigned int Span::longestSpan()
{
    if (this->_n <= 1)
        throw Span::Limits();
	else
	{
		std::vector<int> array(this->_tab->size(), 0);
		std::adjacent_difference(this->_tab->begin(), this->_tab->end(), array.begin());
		std::vector<int>::iterator it;
		for (it = array.begin(); it != array.end(); it++)
		{
			*it = std::abs(*it);
			// std::cout << "it = " << *it << std::endl;
		}
		return (*std::max_element(array.begin() + 1, array.end()));
	}
}

const char  *Span::Limits::what() const throw()
{
    return ("No Span");
}

const char  *Span::NoSpace::what() const throw()
{
    return ("Span already Full");
}