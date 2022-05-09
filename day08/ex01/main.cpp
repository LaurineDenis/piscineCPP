#include "span.hpp"

int main() 
{
	try {
		// Span spa = Span(10000);
		// srand(time(NULL));
		// for (int i = 0; i < 10000; i++)
		//     spa.addNumber(rand());
		std::vector<int> itVector;
		srand(time(NULL));
		for (int i = 0; i < 15; i++)
		{
			itVector.push_back(i * i + rand()/10000);
		}
		Span sp = Span(10000);
		sp.addNumber(itVector.begin(), itVector.end() - 1);
		Span sp1 = Span(5);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(2);
		sp1.addNumber(11);
		sp1.addNumber(11);
		sp1.addNumber(1);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}
    return 0; 
}