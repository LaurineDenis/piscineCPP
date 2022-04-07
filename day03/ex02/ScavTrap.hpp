#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include <string>

class ScavTrap : public ClapTrap
{
	public:

			ScavTrap(void);
			ScavTrap(std::string name);
			ScavTrap(ScavTrap const &src);
			~ScavTrap(void);

			ScavTrap	&operator=(ScavTrap const &src);
			void		attack(std::string const &target);
			void		guardGate(void);

	private:

			std::string		_name;
};

#endif