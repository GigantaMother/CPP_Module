#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main (void)
{
	std::cout << "_________________________" << std::endl;
	std::cout << "______Correct test_______" << std::endl;
	std::cout << "_________________________" << std::endl;
	const Animal* meta = new Animal();
	std::cout << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << "_________________________" << std::endl;
	const Animal* j = new Dog();
	std::cout << j->getType() << std::endl;
	j->makeSound();
	std::cout << "_________________________" << std::endl;
	const Animal* i = new Cat();
	std::cout << i->getType() << std::endl;
	i->makeSound();
	std::cout << "_________________________" << std::endl;
	std::cout << "_______Wrong test________" << std::endl;
	std::cout << "_________________________" << std::endl;
	const WrongAnimal* meta_wrong = new WrongAnimal();
	std::cout << meta_wrong->getType() << std::endl;;
	meta_wrong->makeSound();
	std::cout << "_________________________" << std::endl;
	const WrongAnimal* i_wrong = new WrongCat();
	std::cout << i_wrong->getType() << std::endl;
	i_wrong->makeSound();
	std::cout << "_________________________" << std::endl;
	std::cout << "_______Destructed_________" << std::endl;
	std::cout << "_________________________" << std::endl;
	delete meta;
	delete i;
	delete j;
	delete meta_wrong;
	delete i_wrong;

	return (0);
}
