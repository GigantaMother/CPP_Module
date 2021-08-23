#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	std::cout << "______________________________________" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		std::cout << club.getType()<< std::endl;

		HumanA bob("Bob", club);
		bob.attack();

		club.setType("some other type of club");
		bob.attack();
	}
	{
		std::cout << "______________________________________" << std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << "______________________________________" << std::endl;

	return (0);
}
