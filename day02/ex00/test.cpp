#include <iostream>

int main(void)
{
    std::string i = "bonjour";
    std::string iREF(i);
    std::string& iREF2 = i;

    std::cout << i << std::endl;
    std::cout << iREF << std::endl;
    std::cout << iREF2 << std::endl;
    i = "coucou";
    std::cout << i << std::endl;
    std::cout << iREF << std::endl;
    std::cout << iREF2 << std::endl;
    i = "cerise";
    std::cout << i << std::endl;
    std::cout << iREF << std::endl;
    std::cout << iREF2 << std::endl;
}