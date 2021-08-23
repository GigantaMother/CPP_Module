#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "________________" << std::endl;
	ClapTrap robot("Alex");
	robot.attack("Bill");
	robot.takeDamage(40);
	robot.beRepaired(25);
	std::cout << "________________" << std::endl;
	ClapTrap robot1 = robot;
	robot1.attack("Bill");
	robot1.takeDamage(42);
	robot1.beRepaired(21);
	std::cout << "________________" << std::endl;

	return (0);
}
