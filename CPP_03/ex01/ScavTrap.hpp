#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &scav);
		~ScavTrap(void);

		void attack(std::string const &target);
		void guardGate(void);

		ScavTrap &operator=(ScavTrap const &scav);
};

# endif