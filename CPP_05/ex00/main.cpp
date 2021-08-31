#include "Bureaucrat.hpp"

void print_revers(std::string str);
void test(std::string name, int grade, int level);

int main (void)
{
	Bureaucrat bur("Alex", 5);

	std::cout << "__________________________________" << std::endl;
	print_revers("Test 1");
	test("Carl", 5, 0);
	print_revers("Test 2");
	test("Albert De Salvo", 0, 0);
	print_revers("Test 3");
	test("James Olmos Cunningham", 151, 0);
	std::cout << "__________________________________" << std::endl;
	print_revers("Test 4");
	test("Evan Redgrave", 5, 1);
	print_revers("Test 5");
	test("Pete Fergusson", 1, 1);
	std::cout << "__________________________________" << std::endl;
	print_revers("Test 5");
	test("Peter Dong", 149, -1);
	print_revers("Test 6");
	test("Rose Everdeen", 150, -1);
	std::cout << "__________________________________" << std::endl;

	return (0);
}

void print_revers(std::string str)
{
	std::cout << REVERS << str << DEFAULT << std::endl;
}

void test(std::string name, int grade, int level)
{
	try
	{
		Bureaucrat bur(name, grade);
		std::cout << bur << std::endl;	
		if (level == 1)
		{
			bur.higherGrade();
			std::cout << bur << std::endl;	
		}
		else if (level == -1)
		{
			bur.belowGrade();
			std::cout << bur << std::endl;	
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
