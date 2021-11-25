#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

			WrongCat(void);
			WrongCat(std::string type);
			WrongCat(WrongCat const &src);
			~WrongCat(void);

			WrongCat		operator=(WrongCat const &src);
			void	makeSound() const;

	private:
			std::string		type;
};

#endif