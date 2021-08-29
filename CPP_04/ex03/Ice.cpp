#include "Ice.hpp"

Ice::Ice(void):AMateria("ice")
{
	std::cout << GREEN << this->type << " constructor" << DEFAULT << std::endl;
}

Ice::Ice(Ice const &copy):AMateria(copy.type)
{
	std::cout << BLUE << this->type << DEFAULT << " copy" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << RED << this->type << " destructor" << DEFAULT << std::endl;
}

AMateria *Ice::clone(void) const
{
	AMateria *clone = new Ice(*this);
	return (clone);
}

void Ice::use(ICharacter &target)
{
	std::cout << BLUE << " shoots an ice bolt at " << DEFAULT;
	AMateria::use(target);
	std::cout << std::endl;
	return ;
}
