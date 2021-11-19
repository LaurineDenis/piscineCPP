#include "contact.hpp"

Contact	add_contact(Contact annuaire)
{
	annuaire.set_first_name();
	annuaire.set_last_name();
	annuaire.set_nickname();
	annuaire.set_phone_number();
	annuaire.set_darkest_secret();
	return (annuaire);
}

int	remplace_contact(int nb_contact)
{
	std::string	line;
	int			index;


	std::cout << "Which index do you want to delete ?" << std::endl;
	while (1)
	{
		index = -1;
		getline(std::cin, line);
		if (!line.find_first_not_of("0123456789"))
		{
			std::cout << "NOT AN INDEX" << std::endl;
			continue;
		}
		else if (line.size() > 0)
			index = std::stoi(line);
		if (index > 8 || index <  0)
			std::cout << "INVALID INDEX" << std::endl;
		else if (index <= nb_contact)
			break;
		else
			std::cout << "INDEX NOT FOUND" << std::endl;
	}
	return (index);
}

void	print_annuaire(Contact annuaire[8], int nb_contact)
{
	int 		i;
	std::string	str = "          ";

	i = 0;
	std::cout << "INDEX     |FIRST_NAME|LAST_NAME |NICKNAME  |" << std::endl;
	while (i < nb_contact)
	{
		std::cout << str.substr(0, 9) << i + 1 << "|";
		if (annuaire[i].get_first_name().size() > 10)
			std::cout << annuaire[i].get_first_name().substr(0, 9) << ".|";
		else
			std::cout << str.substr(0, 10 - annuaire[i].get_first_name().size()) << annuaire[i].get_first_name() << "|";
		if (annuaire[i].get_last_name().size() > 10)
			std::cout << annuaire[i].get_last_name().substr(0, 9) << ".|";
		else
			std::cout << str.substr(0, 10 - annuaire[i].get_last_name().size()) << annuaire[i].get_last_name() << "|";
		if (annuaire[i].get_nickname().size() > 10)
			std::cout << annuaire[i].get_nickname().substr(0, 9) << ".|" << std::endl;
		else
			std::cout << str.substr(0, 10 - annuaire[i].get_nickname().size()) << annuaire[i].get_nickname() << "|" <<std::endl;
		i++;
	}
}

void	print_contact(Contact annuaire)
{
	std::cout << annuaire.get_first_name() << std::endl;
	std::cout << annuaire.get_last_name() << std::endl;
	std::cout << annuaire.get_nickname() << std::endl;
	std::cout << annuaire.get_phone_number() << std::endl;
	std::cout << annuaire.get_darkest_secret() << std::endl;
}

void	search_contact(Contact annuaire[8], int nb_contact)
{
	std::string	line;
	int			index;

	if (nb_contact > 0)
		print_annuaire(annuaire, nb_contact);
	else
	{
		std::cout << "PHONE BOOK EMPTY ADD SOME CONTACTS" << std::endl;
		return ;
	}
	std::cout << "ENTER THE INDEX OF THE CONTACT YOU WANT TO SEE" << std::endl;
	while (1)
	{
		index = -1;
		getline(std::cin, line);
		if (!line.find_first_not_of("0123456789"))
		{
			std::cout << "NOT AN INDEX" << std::endl;
			continue;
		}
		else if (line.size() > 0)
			index = std::stoi(line);
		if (index > 8 || index <  0)
			std::cout << "INVALID INDEX" << std::endl;
		else if (index <= nb_contact)
			break;
		else
			std::cout << "INDEX NOT FOUND" << std::endl;
	}
	print_contact(annuaire[index - 1]);
}