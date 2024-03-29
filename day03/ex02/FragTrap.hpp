#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

			FragTrap(void);
			FragTrap(std::string name);
			FragTrap(FragTrap const &src);
			~FragTrap(void);

			FragTrap	&operator=(FragTrap const &src);
			void		attack(std::string const &target);
			void		highFivesGuys(void);

	private:

			std::string		_name;
};

#endif