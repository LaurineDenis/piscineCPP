#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
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

	protected:
			static int hitPointsInit;
			static int energyPointsInit;
			static int attackDamageInit;
};

#endif