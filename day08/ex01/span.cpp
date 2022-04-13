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

Span::Span(Span const &src)
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
        this->_tab->assign(*src._tab->begin(), *src._tab->end());
    }
	return (*this);
}

void	Span::addNumber(unsigned const n)
{
	if (this->_tab->size() >= this->_n)
        throw Limits();
    _tab->push_back(n);
}
 
unsigned int Span::shortestSpan()
{
    if (this->_n <= 1)
        throw Limits();

    std::vector<int> array(this->_tab->size(), 0);
    std::adjacent_difference(this->_tab->begin(), this->_tab->end(), array.begin());
    std::vector<int>::iterator it;
    for (it = array.begin(); it != array.end(); it++)
    {
        *it = std::abs(*it);
        std::cout << "it = " << *it << std::endl;
    }
    return (*std::min_element(array.begin() + 1, array.end()));
}

unsigned int Span::longestSpan()
{
    if (this->_n <= 1)
        throw Limits();

    std::vector<int> array(this->_tab->size(), 0);
    std::adjacent_difference(this->_tab->begin(), this->_tab->end(), array.begin());
    std::vector<int>::iterator it;
    for (it = array.begin(); it != array.end(); it++)
    {
        *it = std::abs(*it);
        std::cout << "it = " << *it << std::endl;
    }
    return (*std::max_element(array.begin() + 1, array.end()));
}