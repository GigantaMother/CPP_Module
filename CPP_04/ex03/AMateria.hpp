#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string>

# define DEFAULT	"\033[0m"
# define BOLD		"\033[1m"
# define UNDERLINE	"\033[4m"
# define REVERS		"\033[7m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define AQUA		"\033[36m"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const &type);
		virtual	~AMateria(void);
		
		std::string const	&getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);

	protected:
		std::string type;
};

# endif
