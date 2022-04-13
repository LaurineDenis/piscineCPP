#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:

			WrongAnimal(void);
			WrongAnimal(std::string type);
			WrongAnimal(WrongAnimal const &src);
			~WrongAnimal(void);

			WrongAnimal		&operator=(WrongAnimal const &src);
			std::string		getType(void) const;
			void			makeSound() const;

	protected:
			std::string		type;
};

#endif