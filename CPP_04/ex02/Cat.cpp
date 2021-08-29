#include "Cat.hpp"

// public block
Cat::Cat():Animal("Cat"), CatBrain(new Brain())
{
	std::cout << GREEN << "Cat constructor" << DEFAULT << std::endl;
}

Cat::Cat(Cat const &c):Animal(c)
{
	std::cout << "Cat copy" << std::endl;
	*this = c;
}

Cat::~Cat(void)
{
	std::cout << RED << "Cat destructed" << DEFAULT << std::endl;
	delete this->CatBrain;
}

void Cat::makeSound(void) const
{
	std::cout << YELLOW << "Meow!" << DEFAULT << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &c)
{
	this->type = c.type;
	this->CatBrain = new Brain(*(c.CatBrain));
	return (*this);
}
