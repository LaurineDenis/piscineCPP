#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();

	const WrongAnimal* Wmeta = new WrongAnimal();
	const WrongAnimal* Wcat = new WrongCat();
	std::cout << Wcat->getType() << " " << std::endl;
	Wcat->makeSound();
	Wmeta->makeSound();
	delete cat;
	return 0;
}