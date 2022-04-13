#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array {
    
    public :
    		Array<T>(void):_n(0){
                _tab = '\0';
            }
			Array<T>(unsigned int n): _n(n), _tab(new T[n]()){};
			Array(Array<T> const &src){
                *this = src;
                // return *this;
            }
			~Array(void){
                if (this->_n)
                {
                    delete [] this->_tab;
                }
            }
			Array<T>	&operator=(Array<T> const &src){
                if (this->_n)
                {
                    delete [] this->_tab;
                    this->_n--;
                }
                this->_n = src._n;
                this->_tab = new T[this->_n];
                for (unsigned int i = 0; i < this->_n; i++)
                    this->_tab[i] = src._tab[i];
                return (*this);
            }

            T &operator [](unsigned int index)
            {
                if (index > this->_n)
                    throw Array<T>::Limits();
                return (this->_tab[index]);
            }

            unsigned int getNbr(void) const {
                return (this->_n);
            }

            class Limits : public std::exception {
                virtual const char *what() const throw ()
                {
                    return ("This element is out of limits.");
                }
            };

    private :
        unsigned int    _n;
        T               *_tab;
};

#endif