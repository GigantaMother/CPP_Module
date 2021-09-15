#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
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
# define F_NONE		"\033[37m"

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &a);
		virtual ~WrongAnimal(void);

		std::string	const &getType(void) const;
		void makeSound(void) const;

		WrongAnimal	&operator=(WrongAnimal const &a);

	protected:
		std::string type;
		WrongAnimal(std::string const &type);
};

# endif
