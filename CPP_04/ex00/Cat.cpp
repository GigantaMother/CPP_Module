#include "Cat.hpp"

// public block
Cat::Cat():Animal("Cat")
{
	std::cout << GREEN << "Cat constructor" << DEFAULT << std::endl;
}

Cat::Cat(Cat const &c):Animal(c)
{
	std::cout << "Cat copy" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << RED << "Cat destructed" << DEFAULT << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << YELLOW << "Meow!" << DEFAULT << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &c)
{
	this->type = c.type;
	return (*this);
}
