#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog: public Animal
{
	private:
		Brain	*DogBrain;

	public:
		Dog(void);
		Dog(Dog const &d);
		virtual ~Dog(void);

		virtual void	makeSound(void) const;

		Dog				&operator=(Dog const &d);
};

# endif
