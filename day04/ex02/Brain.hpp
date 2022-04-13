#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:

			Brain(void);
			Brain(std::string type);
			Brain(Brain const &src);
			~Brain(void);

			Brain			operator=(Brain const &src);

	protected:
			std::string		ideas[100];
};

#endif