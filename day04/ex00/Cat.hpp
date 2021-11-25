#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:

			Cat(void);
			Cat(std::string type);
			Cat(Cat const &src);
			~Cat(void);

			Cat		&operator=(Cat const &src);
			void	makeSound() const;

	private:
			std::string		type;
};

#endif