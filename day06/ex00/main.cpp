#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <iomanip>

int main(int ac, char **av)
{
    std::string src;
    int         i;
    char        c;
    float       f;
    double      d;

    if (ac != 2)
    {
        std::cout << "Invalid arguments" <<std::endl;
        return (0);
    }
    src = av[1];
    if (src.size() == 1 && isalpha(src[0]))
    {
        c = src[0];
        std::cout << "Char : " << c <<std::endl;
        std::cout << "Int : " << static_cast<int>(c) <<std::endl;
        std::cout << "Float : " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
        std::cout << "Double : " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
    }
    else
    {
        try 
        {
            d = std::stod(src);
        }
        catch (std::exception e)
        {
            std::cout << "Invalid arguments" <<std::endl;
            return (0);
        }
        c = static_cast<char>(d);
        i = static_cast<int>(d);
        f = static_cast<float>(d);
        if (i >= 33 && i<= 126)
        {
            std::cout << "Char : " << c <<std::endl;
            std::cout << "Int : " << i <<std::endl;
            std::cout << "Float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
            std::cout << "Double : " << std::fixed << std::setprecision(1) << d << std::endl;
        }
        else if (i >= 0 && i <= 32)
        {
            std::cout << "Char : Non displayable" << std::endl;
            std::cout << "Int : " << i << std::endl;
            std::cout << "Float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
            std::cout << "Double : " << std::fixed << std::setprecision(1) << d << std::endl;
        }
        else if (std::numeric_limits<int>::max() < d || std::numeric_limits<int>::min() > d || std::isnan(d) || std::isinf(d))
        {
            std::cout << "Char : Impossible" << std::endl;
            std::cout << "Int : Impossible" << std::endl;
            std::cout << "Float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
            std::cout << "Double : " << std::fixed << std::setprecision(1) << d << std::endl;
        }
        else
        {
            std::cout << "Char : Impossible" << std::endl;
            std::cout << "Int : " << i << std::endl;
            std::cout << "Float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
            std::cout << "Double : " << std::fixed << std::setprecision(1) << d << std::endl;
        }
    }
    return (0);
}