#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club):_name(name), _club(club){}

HumanA::~HumanA(){}

void HumanA::attack()
{
	std::cout << this->_name << "attack: " << this->_club.getType() << std::endl;
	return ;
}
