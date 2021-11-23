#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

			ScavTrap(void);
			ScavTrap(std::string name);
			ScavTrap(ScavTrap const &src);
			~ScavTrap(void);

			ScavTrap	operator=(ScavTrap const &src);
			void		attack(std::string const &target);
			void		takeDamage(unsigned int amount);
			void		beRepaired(unsigned int amount);
			void		guardGate(void);

	private:

			std::string		_name;
			int				_hit_points;
			int				_energy_points;
			int				_attack_dammage;
};

#endif