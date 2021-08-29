#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type)
{
	std::cout << GREEN << type << "(Abstract materia) constructor" << DEFAULT << std::endl;
	this->type = type;
}

AMateria::~AMateria(void)
{
	std::cout << RED << this->type << "(Abstract materia) destructor" << DEFAULT << std::endl;
}

std::string const &AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName();
}
