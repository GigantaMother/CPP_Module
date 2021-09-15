#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_bag[4];
		int			_num;

	public:
		Character(std::string const &name);
		Character(Character const &clone);
		virtual	~Character(void);

		virtual std::string const	&getName(void) const;
		virtual void				equip(AMateria* u);
		virtual void				unequip(int u);
		virtual void				use(int u, ICharacter& target);

		Character					&operator=(Character const &copy);
};

# endif
