#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <vector>

template<typename T>
void easyfind(T const &x, const int i)
{
    typename T::const_iterator it;
    it = std::find(x.begin(), x.end(), i);
    if (it == x.end())
        std::cout << "Not found" << std::endl;
    else
        std::cout << "Found : " << *it <<std::endl;
}

#endif