#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	this->_type = type;
}

Weapon::~Weapon(){}

const std::string &Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string const &type)
{
	this->_type = type;
	return ;
}
