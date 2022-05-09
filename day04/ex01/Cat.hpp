#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:

			Cat(void);
			Cat(std::string type);
			Cat(Cat const &src);
			~Cat(void);

			Cat		&operator=(Cat const &src);
			void	makeSound() const;
			Brain	*getBrain(void) const;

	private:
			std::string		type;
			Brain*			_brain;
};


#endif