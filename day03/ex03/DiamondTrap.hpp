#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:

			DiamondTrap(void);
			DiamondTrap(std::string name);
			DiamondTrap(DiamondTrap const &src);
			~DiamondTrap(void);

			DiamondTrap	operator=(DiamondTrap const &src);
			void		attack(std::string const &target);
			void		whoAmI(void);

	private:

			std::string		_name;
};

#endif