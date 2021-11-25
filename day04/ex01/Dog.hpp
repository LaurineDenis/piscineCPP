#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:

			Dog(void);
			Dog(std::string type);
			Dog(Dog const &src);
			~Dog(void);

			Dog		&operator=(Dog const &src);
			void	makeSound() const;

	private:
			std::string		type;
			Brain			*brain;
};

#endif