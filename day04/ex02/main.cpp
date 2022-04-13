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
	std::cout << "deuxieme chat"<<std::endl;
    Cat cat_2(cat_1);

    //const Animal* k = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "Type : " << j->getType() << std::endl;
    j->makeSound();
    std::cout << "Type : " << i->getType() << std::endl;
    i->makeSound();
    // std::cout << "Type : " << k->getType() << std::endl;
    // k->makeSound();
    delete j;
    delete i;

   return 0;

}