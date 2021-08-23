#include "Contact.hpp"

Contact::Contact(void)
{
	this->_index = -1;
	this->_name = "no";
	this->_surname = "no";
	this->_nickname = "no";
	this->_number = "no";
	this->_secret = "no";
}

Contact::~Contact(void){}

void	Contact::add(int ind)
{
	std::string	temp;

	this->_index = ind;
	std::cout << "name: ";
	if (!getline(std::cin, temp))
		return ;
	this->_name = temp;
	std::cout << "surname: ";
	if (!getline(std::cin, temp))
		return ;
	this->_surname = temp;
	std::cout << "nickname: ";
	if (!getline(std::cin, temp))
		return ;
	this->_nickname = temp;
	std::cout << "number: ";
	if (!getline(std::cin, temp))
		return ;
	this->_number = temp;
	std::cout << "secret: ";
	if (!getline(std::cin, temp))
		return ;
	this->_secret = temp;
}

void	Contact::display(void)
{
	std::cout << "index: " << this->_index << std::endl;
	std::cout << "name: " << this->_name << std::endl;
	std::cout << "surname: " << this->_surname << std::endl;
	std::cout << "nickname: " << this->_nickname << std::endl;
	std::cout << "number: " << this->_number << std::endl;
	std::cout << "secret: " << this->_secret << std::endl;
}

void	Contact::display_short(void)
{
	std::cout << std::setw(10) << this->_index << "|";
	if (this->_name.size() <= 10)
		std::cout << std::setw(10) << this->_name;
	else
		display_shorten(this->_name);
	std::cout << "|";
	if (this->_surname.size() <= 10)
		std::cout << std::setw(10) << this->_surname;
	else
		display_shorten(this->_surname);
	std::cout << "|";
	if (this->_nickname.size() <= 10)
		std::cout << std::setw(10) << this->_nickname;
	else
		display_shorten(this->_nickname);
	std::cout << std::endl;
}

void	Contact::display_shorten(std::string str)
{
	for (int i = 0; i < 9; i++)
		std::cout << str[i];
	std::cout << "." ;
}
