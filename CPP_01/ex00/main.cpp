#include "Zombie.hpp"

int	main(void)
{
	//1
	Zombie zom_1("Alex");
	zom_1.announce();
	//2
	randomChump("May");
	//3
	Zombie *zom_2 = newZombie("Billy");
	zom_2->announce();
	delete zom_2;
	return (0);
}
