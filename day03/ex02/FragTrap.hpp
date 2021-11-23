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

			FragTrap	operator=(FragTrap const &src);
			void		attack(std::string const &target);
			void		takeDamage(unsigned int amount);
			void		beRepaired(unsigned int amount);
			void		highFivesGuys(void);

	private:

			std::string		_name;
			int				_hit_points;
			int				_energy_points;
			int				_attack_dammage;
};

#endif