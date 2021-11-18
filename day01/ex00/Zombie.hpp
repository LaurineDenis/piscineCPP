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

	private:
	std::string		_name;

};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif