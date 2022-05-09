#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <stack>
# include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:

			MutantStack(void) {};
			MutantStack(MutantStack const &src) : std::stack<T>(src){};
			~MutantStack(void) {};

			MutantStack		    &operator=(MutantStack const &src)
			{
				if (*this != src)
					*this = new std::stack<T>(src);
				return *this;
			};
            
            typedef typename std::stack<T>::container_type::iterator    iterator;
            typedef typename std::stack<T>::container_type::reverse_iterator    reverse_iterator;
            iterator begin()
			{
				return (this->c.begin());
			}
			iterator end()
			{
				return (this->c.end());
			}
			reverse_iterator rbegin()
			{
				return (this->c.rbegin());
			}
			reverse_iterator rend()
			{
				return (this->c.rend());
			}
};

#endif