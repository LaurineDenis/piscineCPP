#include "iter.hpp"

int main(void)
{
    int Tab[6] =  {1, 2, 3, 4, 5, 6};
    iter(Tab, 6, &print);

    std::cout << "--------------------------" << std::endl;

    std::string Tab_2[3] =  {"fin", "bientot", "?"};
    iter(Tab_2, 3, &print);
    return 0;
}