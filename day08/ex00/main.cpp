#include "easyfind.hpp"

int main(void)
{
    std::vector<int>    tab(12, 10);
    easyfind(tab, 5);
    for(unsigned long i = 0; i < tab.size(); i++)
    {
       std::cout << "tab[" << i << "]= " << tab[i] << std::endl;
    }
    std::cout << "-------------------" <<std::endl;
    std::vector<int>    tab_2;
    for(int i = 0; i <10; i++)
    {
        tab_2.push_back(i);
       std::cout << "tab_2[" << i << "]= " << tab_2[i] << std::endl;
    }
    easyfind(tab_2, 1);
    easyfind(tab_2, 15);
}