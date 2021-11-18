#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	Weapon;

class HumanB
{
	public:

	HumanB(std::string name);
	~HumanB();

	void	attack(void);
	void	setWeapon(Weapon &weapon);

	private:

	std::string		_name;
	Weapon			*_weapon;
};
#endif