#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>
# include <iomanip>

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define BLUE		"\033[34m"
# define F_NONE		"\033[37m"
# define YELLOW		"\033[33m"

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &clap);
		~ClapTrap(void);

		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		ClapTrap	&operator=(ClapTrap const &clap);

	protected:
		std::string	_name;
		int			_hitpoints;
		int			_energyPoints;
		int			_attackDamage;
};

# endif
