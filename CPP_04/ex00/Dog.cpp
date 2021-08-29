#include "Dog.hpp"

// public block
Dog::Dog():Animal("Dog")
{
	std::cout << GREEN << "Dog constructor" << DEFAULT << std::endl;
}

Dog::Dog(Dog const &d):Animal(d)
{
	std::cout << "Dog copy" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << RED << "Dog destructed" << DEFAULT << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << YELLOW << "Woof!" << DEFAULT << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &d)
{
	this->type = d.type;
	return (*this);
}
