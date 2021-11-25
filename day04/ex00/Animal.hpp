#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:

			Animal(void);
			Animal(std::string type);
			Animal(Animal const &src);
			~Animal(void);

			Animal			&operator=(Animal const &src);
			std::string		getType(void) const;
			virtual void	makeSound() const;

	protected:
			std::string		type;
};

#endif