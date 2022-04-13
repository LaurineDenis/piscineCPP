#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void    iter(T const adr[], unsigned int const size, void(*fct)(T const &tab))
{
    for (unsigned int i = 0; i < size; i++)
        fct(adr[i]);
}

template<typename T>
void print(T const tab)
{
    std::cout << tab << std::endl;
}

#endif