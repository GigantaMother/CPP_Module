#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "________________" << std::endl;
	std::cout << "____ClapTrap____" << std::endl;
	std::cout << "________________" << std::endl;
	ClapTrap robot_1("Alex");
	robot_1.attack("Bill");
	robot_1.takeDamage(40);
	robot_1.beRepaired(25);
	std::cout << "________________" << std::endl;
	ClapTrap robot_2 = robot_1;
	robot_2.attack("Bill");
	robot_2.takeDamage(42);
	robot_2.beRepaired(21);
	std::cout << "________________" << std::endl;
	std::cout << "____ScavTrap____" << std::endl;
	std::cout << "________________" << std::endl;
	ScavTrap robot_3("May");
	robot_3.attack("Bill");
	robot_3.takeDamage(18);
	robot_3.beRepaired(40);
	robot_3.guardGate();
	std::cout << "________________" << std::endl;
	ScavTrap robot_4 = robot_3;
	robot_2.attack("Bill");
	robot_2.takeDamage(707);
	robot_2.beRepaired(0);
	std::cout << "________________" << std::endl;
	std::cout << "___destructor___" << std::endl;
	std::cout << "________________" << std::endl;

	return (0);
}
