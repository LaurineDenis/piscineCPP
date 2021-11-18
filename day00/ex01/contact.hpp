#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	public:

	Contact(void);
	~Contact(void);

	std::string		get_first_name(void);
	std::string		get_last_name(void);
	std::string		get_nickname(void);
	std::string		get_phone_number(void);
	std::string		get_darkest_secret(void);

	void			set_first_name();
	void			set_last_name();
	void			set_nickname();
	void			set_phone_number();
	void			set_darkest_secret();

	private:

	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone_number;
	std::string		_darkest_secret;
};

Contact	add_contact(Contact annuaire);
void	search_contact(Contact annuaire[8], int nb_contact);
void	print_annuaire(Contact annuaire[8], int nb_contact);
void	print_contact(Contact annuaire);
int		remplace_contact(int nb_contact);

#endif