#include "contact.hpp"

Contact::Contact(void) 
{
	return ;
}

Contact::~Contact(void) 
{
	return ;
}

void		Contact::set_first_name(void)
{
	std::cout << "Enter First Name :" << std::endl;
	std::getline(std::cin, this->_first_name);
}

void		Contact::set_last_name(void)
{
	std::cout << "Enter Last Name :" << std::endl;
	std::getline(std::cin, this->_last_name);
}

void		Contact::set_nickname(void)
{
	std::cout << "Enter Nickname :" << std::endl;
	std::getline(std::cin, this->_nickname);
}

void		Contact::set_phone_number(void)
{
	std::cout << "Enter Phone Number :" << std::endl;
	std::getline(std::cin, this->_phone_number);
}

void		Contact::set_darkest_secret(void)
{
	std::cout << "Enter Darkest Secret :" << std::endl;
	std::getline(std::cin, this->_darkest_secret);
}

std::string		Contact::get_first_name(void)
{
	return this->_first_name;
}

std::string		Contact::get_last_name(void)
{
	return this->_last_name;
}

std::string		Contact::get_nickname(void)
{
	return this->_nickname;
}

std::string		Contact::get_phone_number(void)
{
	return this->_phone_number;
}

std::string		Contact::get_darkest_secret(void)
{
	return this->_darkest_secret;
}
