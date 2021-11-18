#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:

	Zombie(std::string new_name);
	Zombie(void);
	~Zombie(void);
	void	announce(void);
	void	set_name(std::string name);

	private:
	std::string		_name;

};

Zombie* zombieHorde(int n, std::string name);

#endif