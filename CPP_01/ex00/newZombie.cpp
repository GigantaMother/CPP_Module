#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*zom = new Zombie(name);
	return (zom);
}

void randomChump(std::string name)
{
	Zombie zom(name);
	zom.announce();
}
