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
			
			// MutantStack(unsigned int n);
			MutantStack(MutantStack const &src){
				*this = src;
			};
			~MutantStack(void) {};

			MutantStack		    &operator=(MutantStack const &src){
				this = &src;
				return *this;
			};
            
            typedef typename std::stack<T>::container_type::iterator    iterator;
            iterator begin()
			{
				return (this->c.begin());
			}
			iterator end()
			{
				return (this->c.end());
			}
};

#endif