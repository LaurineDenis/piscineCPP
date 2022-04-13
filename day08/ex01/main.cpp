#include "span.hpp"

int main() 
{
    // Span sp = Span(10000);
    // srand(time(NULL));
    // for (int i = 0; i < 10000; i++)
    //     sp.addNumber(rand());
    Span sp1 = Span(5);
    sp1.addNumber(3);
    sp1.addNumber(17);
    sp1.addNumber(2);
    sp1.addNumber(11);
    sp1.addNumber(1);
    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl;
    return 0; 
}