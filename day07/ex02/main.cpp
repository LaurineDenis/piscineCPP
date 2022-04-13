#include "Array.hpp"

int main(void)
{
    Array<int> tab_int(6);
    Array<int> tab_int_2(5);
    
    for (size_t i = 0; i < tab_int.getNbr(); i++)
    {
        tab_int[i] = i;
        std::cout << "tab_1[" << i << "]= " << tab_int[i] << std::endl;
    }
    std::cout << "size tab_1= " << tab_int.getNbr() << std::endl;
    try
    {
      std::cout <<  "inex = tab[10] = " << tab_int[10] << std::endl;
    }
    catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
    for (size_t i = 0; i < tab_int_2.getNbr(); i++)
    {
        tab_int_2[i] = 8;
        std::cout << "tab_2[" << i << "]= " << tab_int_2[i] << std::endl;
    }
    try
    {
      std::cout << "index = tab_2[3] = " << tab_int_2[3] << std::endl;
    }
    catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << "size tab_2= " << tab_int.getNbr() << std::endl;

    tab_int = tab_int_2;
    for (size_t i = 0; i < tab_int.getNbr(); i++)
        std::cout << "tab[" << i << "]= " << tab_int[i] << std::endl;

    std::cout << "---------CHAR--------------" << std::endl;
    Array<char> tab_char(10);
    Array<char> tab_char_2(5);
    
    for (size_t i = 0; i < tab_char.getNbr(); i++)
    {
        tab_char[i] = 'c';
        std::cout << "tab_1[" << i << "]= " << tab_char[i] << std::endl;
    }
    std::cout << "size tab_1= " << tab_char.getNbr() << std::endl;
    try
    {
      std::cout <<  "inex = tab[10] = " << tab_char[11] << std::endl;
    }
    catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
    for (size_t i = 0; i < tab_char_2.getNbr(); i++)
    {
        tab_char_2[i] = 'p';
        std::cout << "tab_2[" << i << "]= " << tab_char_2[i] << std::endl;
    }
    try
    {
      std::cout << "index = tab_2[3] = " << tab_char_2[3] << std::endl;
    }
    catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << "size tab_2= " << tab_char_2.getNbr() << std::endl;
    
    tab_char = tab_char_2;
    for (size_t i = 0; i < tab_char.getNbr(); i++)
        std::cout << "tab[" << i << "]= " << tab_char[i] << std::endl;
    return 0;
}