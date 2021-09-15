#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_book[4];
		int			_num;

	public:
		MateriaSource(void);
		virtual ~MateriaSource(void);

		virtual void		learnMateria(AMateria *learn);
		virtual AMateria*	createMateria(std::string const &type);
};

# endif
