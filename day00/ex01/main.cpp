#include "contact.hpp"

int main(void)
{
	std::string		line;
	Contact			annuaire[8];
	int				nb_contact;
	std::string		remplace;
	int				tmp;

	nb_contact = 0;
	std::cout << "---PHONE BOOK---" << std::endl;
	std::cout << "Enter ADD to add an contact or SEARCH to search in the phone book and EXIT to quit" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line == "ADD")
		{
			if (nb_contact == 8)
			{
				std::cout<<"PHONEBOOK ALREADY FULL"<<std::endl;
				std::cout<<"Remplace an contact ? (yes or no)"<<std::endl;
				getline(std::cin, remplace);
				if (remplace == "yes" || remplace == "y")
				{
					tmp = remplace_contact(nb_contact);
					annuaire[tmp - 1] = add_contact(annuaire[tmp - 1]);
					std::cout << "Contact N'" << tmp << " remplace" << std::endl;
				}
				else
					std::cout << "Replacement canceled" << std::endl;
			}
			else
			{
				annuaire[nb_contact] = add_contact(annuaire[nb_contact]);
				nb_contact++;
			}
		}
		else if (line == "SEARCH")
			search_contact(annuaire, nb_contact);
		else if (line == "EXIT")
			return (0);
		else if (line.size() > 0)
			std::cout<<"INVALID COMMAND"<<std::endl;
		std::cout << "Enter ADD to add an contact or SEARCH to search in the phone book" << std::endl;
	}
	return (0);
}