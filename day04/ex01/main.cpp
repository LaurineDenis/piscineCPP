#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main(void)
{
	Animal*  animal[10];
     
    for (int i = 0; i < 5; i++)
        animal[i] = new Dog();
    for (int i = 5; i < 10; i++)
        animal[i] = new Cat();
    for (int i = 0; i < 10; i++)
        delete animal[i];

    Cat cat_1;
	std::cout << "\ndeuxieme Cat par copy\n"<<std::endl;
    Cat cat_2(cat_1);
	std::cout << "\n---------------------"<<std::endl;
	Dog	a;
	Dog b;
	std::cout << "\nAssignation Dog"<<std::endl;
	b = a;
	std::cout << "ADDRESS OF A BRAIN :" << (a.getBrain()) << std:: endl;
	std::cout << "ADDRESS OF B BRAIN :" << (b.getBrain()) << std:: endl;
	std::cout << "\nDestruction\n"<<std::endl;
   return 0;

}