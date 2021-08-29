#include "Cure.hpp"

Cure::Cure(void):AMateria("cure")
{
	std::cout << GREEN << this->type << " constructor" << DEFAULT << std::endl;
}

Cure::Cure(Cure const &copy):AMateria(copy.type)
{
	std::cout << YELLOW << this->type << DEFAULT << " copy" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << RED << this->type << " destructor" << DEFAULT << std::endl;
}

AMateria *Cure::clone(void) const
{
	AMateria *clone = new Cure(*this);
	return (clone);
}

void	Cure::use(ICharacter &target)
{
	std::cout << YELLOW << " heals " << DEFAULT;
	::AMateria::use(target);
	std::cout << "’s " << YELLOW << "wounds" << DEFAULT << std::endl;
	return ;
}
