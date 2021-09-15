#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>
# include <iomanip>

# define DEFAULT		"\033[0m"
# define BOLD		"\033[1m"
# define UNDERLINE	"\033[4m"
# define REVERS		"\033[7m"
# define RED			"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define F_NONE		"\033[37m"

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &a);
		virtual ~Animal(void);
		
		std::string const	&getType(void) const;
		virtual void		makeSound(void) const;

		Animal				&operator=(Animal const &a);

	protected:
		std::string	type;
		Animal(std::string const &type);
};

# endif
