#include <iostream>
# include "Array.hpp"

# define MAX_VAL	5
# define RANDOM		10
# define LEAKS		1

# define DEFAULT	"\033[0m"
# define BOLD		"\033[1m"
# define UNDERLINE	"\033[4m"
# define REVERS		"\033[7m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define AQUA		"\033[36m"

void print_revers(std::string str);
void test_1();
void test_2();


int main(void)
{
	test_1();
	test_2();
	return (0);
}

void print_revers(std::string str)
{
	std::cout << REVERS << str << DEFAULT << std::endl;
}

void test_1()
{
	print_revers("INT");
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers0");
	Array<int> numbers0;
	std::cout << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers");
	Array<int> numbers(MAX_VAL);
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << ", ";
	std::cout << std::endl;
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand() % RANDOM;
		numbers[i] = value;
		mirror[i] = value;
	}
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers");
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << ", ";
	std::cout << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("mirror");
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << mirror[i] << ", ";
	std::cout << std::endl;
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return ;
		}
	}
	std::cout << BOLD GREEN "OK"  DEFAULT << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("invalid index (-2)");
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "__________________________________________________" << std::endl;
	print_revers("invalid index (MAX_VAL)");
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers new rand");
	for (unsigned int i = 0; i < MAX_VAL; i++)
		numbers[i] = (rand() % RANDOM) + RANDOM;
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << ", ";
	std::cout << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers1(=)");
	Array<int> numbers1 = numbers;
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << ", ";
	std::cout << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers2(=)");
	Array<int> numbers2(numbers);
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << numbers2[i] << ", ";
	std::cout << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers");
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << ", ";
	std::cout << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("destructor");
	delete [] mirror;
	if (LEAKS != 0)
	{
		std::cout << "__________________________________________________" << std::endl;
		print_revers("leaks");
		std::string str;
		getline(std::cin, str);
	}
}

void test_2()
{
	print_revers("FLOAT");
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers0");
	Array<float> numbers0;
	std::cout << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers");
	Array<float> numbers(MAX_VAL);
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << ", ";
	std::cout << std::endl;
	float* mirror = new float[MAX_VAL];
	srand(time(NULL));
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		const float value = (rand() % RANDOM) * 0.5;
		numbers[i] = value;
		mirror[i] = value;
	}
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers");
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << ", ";
	std::cout << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("mirror");
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << mirror[i] << ", ";
	std::cout << std::endl;
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return ;
		}
	}
	std::cout << BOLD GREEN "OK"  DEFAULT << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("invalid index (-2)");
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "__________________________________________________" << std::endl;
	print_revers("invalid index (MAX_VAL)");
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers new rand");
	for (unsigned int i = 0; i < MAX_VAL; i++)
		numbers[i] = ((rand() % RANDOM) + RANDOM) * 0.5;
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << ", ";
	std::cout << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers1 =");
	Array<float> numbers1 = numbers;
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << ", ";
	std::cout << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers2 ()");
	Array<float> numbers2(numbers);
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << numbers2[i] << ", ";
	std::cout << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("numbers");
	for (unsigned int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << ", ";
	std::cout << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	print_revers("destructor");
	delete [] mirror;
	if (LEAKS != 0)
	{
		std::cout << "__________________________________________________" << std::endl;
		print_revers("leaks");
		std::string str;
		getline(std::cin, str);
	}
}
