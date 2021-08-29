#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &copy);
		virtual ~Cure(void);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif
