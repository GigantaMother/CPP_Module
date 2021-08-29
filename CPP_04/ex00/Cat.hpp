#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &c);
		virtual ~Cat(void);

		virtual void makeSound(void) const;   

		Cat& operator=(Cat const &c);
};

#endif
