#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:

			ClapTrap(void);
			ClapTrap(std::string name);
			ClapTrap(ClapTrap const &src);
			~ClapTrap(void);

			ClapTrap		&operator=(ClapTrap const &src);
			void			attack(std::string const &target);
			void			takeDamage(unsigned int amount);
			void			beRepaired(unsigned int amount);
			void			setHitPoints(int point);
			void			setEnergyPoints(int point);
			void			setAttack_dammage(int point);
			int				getHitPoints(void);
			int				getEnergyPoints(void);
			int				getAttackPoints(void);

	protected:

			std::string		_name;
			int				_hit_points;
			int				_energy_points;
			int				_attack_dammage;
};

#endif