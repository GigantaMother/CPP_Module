#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void print_revers(std::string str);

int main (void)
{
	std::string	test;
	std::cout << "_________________________" << std::endl;
	std::cout << "___________Test__________" << std::endl;
	std::cout << "_________________________" << std::endl;
	print_revers("Создадим исотчник материи");
	IMateriaSource* src = new MateriaSource();
	std::cout << "_________________________" << std::endl;
	print_revers("Изучаем материю");
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	print_revers("Изучаем материю(заполнена книга)");
	src->learnMateria(new Cure());
	std::cout << "_________________________" << std::endl;
	print_revers("Создаём персонажа: me");
	ICharacter* me = new Character("me");
	std::cout << "_________________________" << std::endl;
	print_revers("Создаём материю и даём персонажу: me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	print_revers("Создаём материю и даём персонажу: me(инвентарь полон)");
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << "_________________________" << std::endl;
	print_revers("Создаём персонажа: bob");
	ICharacter* bob = new Character("bob");
	print_revers("Использование материи");
	me->use(0, *bob);
	me->use(1, *bob);
	print_revers("Использование материи(пустой слот)");
	me->use(0, *bob);
	me->use(1, *bob);
	print_revers("Использование материи(неправильный слот)");
	me->use(-1, *bob);
	me->use(100, *bob);
	print_revers("Выбрасывание материи");
	me->unequip(2);
	me->unequip(3);
	print_revers("Выбрасывание материи(пустой слот)");
	me->unequip(2);
	me->unequip(3);
	print_revers("Выбрасывание материи(неправильный слот)");
	me->unequip(-1);
	me->unequip(100);
	std::cout << "_________________________" << std::endl;
	std::cout << "_______Destructed________" << std::endl;
	std::cout << "_________________________" << std::endl;
	delete bob;
	delete me;
	delete src;
	std::cout << "_________________________" << std::endl;
	std::cout << "_______Test leaks________" << std::endl;
	std::cout << "_________________________" << std::endl;
	getline(std::cin, test);

	return (0);
}

void print_revers(std::string str)
{
	std::cout << REVERS << str << DEFAULT << std::endl;
}
