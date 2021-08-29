#include "Dog.hpp"

// public block
Dog::Dog(void):Animal("Dog"), DogBrain(new Brain())
{
	std::cout << GREEN << "Dog constructor" << DEFAULT << std::endl;
}

Dog::Dog(Dog const &d):Animal(d)
{
	std::cout << "Dog copy" << std::endl;
	*this = d;
}

Dog::~Dog(void)
{
	std::cout << RED << "Dog destructed" << DEFAULT << std::endl;
	delete this->DogBrain;
}

void Dog::makeSound(void) const
{
	std::cout << YELLOW << "Woof!" << DEFAULT << std::endl;
	return ;
}

Dog&	Dog::operator=(Dog const &d)
{
	this->type = d.type;
	this->DogBrain = new Brain(*(d.DogBrain));
	return (*this);
}
