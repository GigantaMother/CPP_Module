#include "WrongCat.hpp"

// public block
WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << GREEN << "WrongCat constructor" << DEFAULT << std::endl;
}

WrongCat::WrongCat(WrongCat const &c):WrongAnimal(c)
{
	std::cout << "WrongCat copy" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << RED << "WrongCat destructed" << DEFAULT << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << YELLOW << "Meow!" << DEFAULT << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &c)
{
	this->type = c.type;
	return (*this);
}
