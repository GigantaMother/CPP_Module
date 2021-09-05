#include "span.hpp"

#define DEFAULT		"\033[0m"
#define BOLD		"\033[1m"
#define UNDERLINE	"\033[4m"
#define REVERS		"\033[7m"
#define RED			"\033[31m"
#define GREEN		"\033[32m"
#define YELLOW		"\033[33m"
#define BLUE		"\033[34m"
#define	AQUA		"\033[36m"

void print_revers(std::string str);

void test1();
void test2();
void test3();

int main(void)
{
	test1();
	test2();
	test3();

	return (0);
}

void print_revers(std::string str)
{
	std::cout << REVERS << str << DEFAULT << std::endl;
}

void test1()
{
	std::cout << "_______________________________" << std::endl;
	print_revers("TEST 1");
	Span sp = Span(9);
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	sp.addNumber(5);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "_______________________________" << std::endl;
	sp.printArr();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "_______________________________" << std::endl;
	sp.addNumber(4);
	std::cout << "_______________________________" << std::endl;
	sp.printArr();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "_______________________________" << std::endl;
	sp.addNumber(5);
	std::cout << "_______________________________" << std::endl;
	sp.printArr();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "_______________________________" << std::endl;
	sp.addNumber(INT_MIN);
	std::cout << "_______________________________" << std::endl;
	sp.printArr();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "_______________________________" << std::endl;
	sp.addNumber(INT_MAX);
	std::cout << "_______________________________" << std::endl;
	sp.printArr();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "_______________________________" << std::endl;
	try
	{
		sp.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "_______________________________" << std::endl;
}

void test2()
{
	std::cout << "_______________________________" << std::endl;
	print_revers("TEST 2");
	Span sp = Span(21);
	std::vector<int> arr(10);
	int k = 1;
	for (std::vector<int>::iterator i = arr.begin(); i != arr.end(); i++)
	{
		k *= 2;
		*i = k;
	}
	sp.addNumber(arr.begin(), arr.end());
	std::cout << "_______________________________" << std::endl;
	sp.printArr();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "_______________________________" << std::endl;
	sp.addNumber(arr.begin(), arr.end());
	std::cout << "_______________________________" << std::endl;
	sp.printArr();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "_______________________________" << std::endl;
	try
	{
		sp.addNumber(arr.begin(), arr.end());
		std::cout << "_______________________________" << std::endl;
		sp.printArr();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "_______________________________" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test3()
{
	srand(time(NULL));
	Span sp = Span(10000);
	std::vector<int> arr(10000);
	for (std::vector<int>::iterator i = arr.begin(); i != arr.end(); i++)
		*i = rand();
	print_revers("TEST 3");
	sp.addNumber(arr.begin(), arr.end());
	std::cout << "_______________________________" << std::endl;
	//sp.printArr();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "_______________________________" << std::endl;
}
