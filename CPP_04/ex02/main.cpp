#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{
	std::string	test;
	std::cout << "_________________________" << std::endl;
	std::cout << "___________Test__________" << std::endl;
	std::cout << "_________________________" << std::endl;
	//const Animal* meta = new Animal();
	std::cout << "_________________________" << std::endl;
	const Animal* j = new Dog();
	std::cout << j->getType() << std::endl;
	j->makeSound();
	std::cout << "_________________________" << std::endl;
	const Animal* i = new Cat();
	std::cout << i->getType() << std::endl;
	i->makeSound();
	std::cout << "_________________________" << std::endl;
	const Animal* j_copy = new Dog(*(Dog*)j);
	std::cout << j_copy->getType() << std::endl;
	j_copy->makeSound();
	std::cout << "_________________________" << std::endl;
	const Animal* i_copy = new Cat(*(Cat*)j);
	std::cout << i_copy->getType() << std::endl;
	i_copy->makeSound();
	std::cout << "_________________________" << std::endl;
	std::cout << "_______Destructed________" << std::endl;
	std::cout << "_________________________" << std::endl;
	delete j;
	delete i;
	delete j_copy;
	delete i_copy;
	std::cout << "_________________________" << std::endl;
	std::cout << "_______Test leaks________" << std::endl;
	std::cout << "_________________________" << std::endl;
	getline(std::cin, test);
	std::cout << "_________________________" << std::endl;
	std::cout << "________Test array_______" << std::endl;
	std::cout << "_________________________" << std::endl;
	const Animal *ar[10];
	for (int i = 0; i < 10 ; i++)
	{
		std::cout << i << ")" << std::endl;
		if ((rand() % 2) == 0)
			ar[i] = new Cat();
		else
			ar[i] = new Dog();
		std::cout << ar[i]->getType() << std::endl;;
		ar[i]->makeSound();
	}
	std::cout << "_________________________" << std::endl;
	std::cout << "_______Destructed________" << std::endl;
	std::cout << "_________________________" << std::endl;
	for (int i = 0; i < 10 ; i++)
	{
		std::cout << i << ")" << std::endl;
		delete ar[i];
	}
	std::cout << "_________________________" << std::endl;
	std::cout << "_______Test leaks________" << std::endl;
	std::cout << "_________________________" << std::endl;
	getline(std::cin, test);

	return (0);
}
