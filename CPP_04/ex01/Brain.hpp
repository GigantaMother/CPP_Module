#ifndef BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>

# define DEFAULT		"\033[0m"
# define BOLD		"\033[1m"
# define UNDERLINE	"\033[4m"
# define REVERS		"\033[7m"
# define RED			"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define F_NONE		"\033[37m"

class Brain
{
	private:
		std::string idea[100];

	public:
		Brain(void);
		Brain(Brain &b);
		~Brain();

		Brain &operator=(Brain &b);
};

# endif
