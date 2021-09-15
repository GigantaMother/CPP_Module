#ifndef FLAGTRAP_H
# define FLAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &frag);
		~FragTrap(void);

		void attack(std::string const &target);
		void highFivesGuys(void);

		FragTrap &operator=(FragTrap const &frag);
};

# endif
