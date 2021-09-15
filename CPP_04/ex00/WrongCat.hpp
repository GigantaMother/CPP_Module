#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const &c);
		virtual ~WrongCat(void);
		
		virtual void	makeSound(void) const;

		WrongCat&		operator=(WrongCat const &c);
};

# endif
