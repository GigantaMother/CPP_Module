#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_max_contacts = 8;
	this->_now_contacts = 0;
}

PhoneBook::~PhoneBook(void){}

void	PhoneBook::add(void)
{
	std::cout << "Adding mode" << std::endl;
	this->_con[this->_rec_contacts].add(_rec_contacts + 1);
	this->_now_contacts++;
	if (this->_now_contacts > 8)
		this->_now_contacts = 8;
	this->_rec_contacts++;
	if (this->_rec_contacts == 8)
		this->_rec_contacts = 0;
}

void	PhoneBook::search(void)
{
	std::string	temp;
	int 		ind;

	std::cout << "Search mode" << std::endl;
	for (int i = 0; i < this->_now_contacts; i++)
		_con[i].display_short();
	if (_now_contacts == 0)
		std::cout << "PhoneBook empty" << std::endl;
	else
	{
		std::cout << "input index(0 - exit search mode)" << std::endl;
		while (42)
		{
			if (!std::getline(std::cin, temp))
				break ;
			ind = index_valid(temp);
			if (ind == 0)
				break ;
			if (ind >= 1 && ind <= _now_contacts)
				_con[ind - 1].display();
			else
				std::cout << "input incorrect" << std::endl;
		}
	}
	std::cout << "exit Search mode" << std::endl;
	return ;
}

int	PhoneBook::index_valid(std::string str)
{
	int rez = 0;

	if (str.size() != 1)
		return (-1);
	rez = str[0] - 48;
	if (rez >= 0 && rez <= 9)
		return (rez);
	return (-1);
}

void	PhoneBook::menu(void)
{
	std::string temp;

	std::cout << "______________________________" << std::endl;
	std::cout << "PhoneBook start" << std::endl;
	std::cout << "______________________________" << std::endl;
	std::cout << "Write ADD or SEARCH or EXIT" << std::endl;
	while (42)
	{
		if (!std::getline(std::cin, temp))
			break ;
		if (temp == "ADD")
			add();
		else if (temp == "SEARCH")
			search();
		else if (temp == "EXIT")
			break ;
		else
			std::cout << "input incorrect" << std::endl;
	}
	std::cout << "close PhoneBook" << std::endl;
	return ;
}
