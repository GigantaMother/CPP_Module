#include "Animal.hpp"

// public block
Animal::Animal(void)
{
	std::cout << GREEN << "Animal constructor (public)" << DEFAULT << std::endl;
	this->type = "Basic";
}

Animal::Animal(Animal const &a)
{
	std::cout << "Animal copy" << std::endl;
	this->type = a.type;
}

Animal::~Animal(void)
{
	std::cout << RED << "Animal destructed" << DEFAULT << std::endl;
}

std::string const &Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << YELLOW << "Basic sound" << DEFAULT << std::endl;
	return ;
}

Animal &Animal::operator=(Animal const &a)
{
	this->type = a.type;
	std::cout << "Animal operator [=]" << std::endl;
	return (*this);
}

// protected block
Animal::Animal(std::string const &type)
{
	std::cout << GREEN << "Animal constructor (protected)" << DEFAULT << std::endl;
	this->type = type;
}
