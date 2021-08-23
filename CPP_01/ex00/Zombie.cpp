#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name;
	std::cout << " retire" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name;
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}
