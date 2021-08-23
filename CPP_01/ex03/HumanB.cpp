#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name):_name(name), _club(NULL){}

HumanB::~HumanB(){}
		
void HumanB::setWeapon(Weapon &club)
{
	this->_club = &club;
	return ;
}

void HumanB::attack()
{
	std::cout << this->_name << " attack: ";
	if (this->_club == NULL)
		std::cout << "no weapons";
	else
		std::cout << this->_club->getType();
	std::cout << std::endl;
	return ;
}
