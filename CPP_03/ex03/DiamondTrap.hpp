#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &diamond);
		~DiamondTrap(void);

		void attack(std::string const &target);
		void whoAmI(void);

		DiamondTrap &operator=(DiamondTrap const &diamond);
};

#endif
