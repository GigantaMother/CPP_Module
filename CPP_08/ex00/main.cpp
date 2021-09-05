#include "easyfind.hpp"

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

template<typename T>
void print_arr(T arr);

template<typename T, typename R>
void fill_arr(T *arr, int size, R num);

template<typename T, typename R>
void test(T arr, R search);

int main(void)
{
	std::cout << "Hello!!!" << std::endl;
	int size = 10;
	std::cout << "_____________________________" << std::endl;
	print_revers("vector<int>");
	print_revers("Test 1");
	std::vector<int> arr1;
	fill_arr(&arr1, size, 0);
	print_arr(arr1);
	test (arr1, 7);
	std::cout << "_____________________________" << std::endl;
	print_revers("Test 2");
	print_arr(arr1);
	test (arr1, 0);
	std::cout << "_____________________________" << std::endl;
	print_revers("Test 3");
	print_arr(arr1);
	test (arr1, 42);
	std::cout << "_____________________________" << std::endl;
	print_revers("vector<char>");
	print_revers("Test 4");
	std::vector<char> arr2;
	print_arr(arr2);
	test (arr2, 55);
	std::cout << "_____________________________" << std::endl;
	print_revers("Test 5");
	fill_arr(&arr2, size, 55);
	print_arr(arr2);
	test (arr2, '<');
	std::cout << "_____________________________" << std::endl;
	print_revers("list<int>");
	print_revers("Test 6");
	std::list<int> arr3;
	for(std::list<int>::iterator it = arr3.begin(); it!= arr3.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	test (arr3, 43);
	std::cout << "_____________________________" << std::endl;
	print_revers("Test 7");
	fill_arr(&arr3, size, 30);
	for(std::list<int>::iterator it = arr3.begin(); it!= arr3.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	test (arr3, 43);
	std::cout << "_____________________________" << std::endl;
	print_revers("Test 7");
	fill_arr(&arr3, 1, 43);
	for(std::list<int>::iterator it = arr3.begin(); it!= arr3.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	test (arr3, 43);
	
	return (0);
}

void print_revers(std::string str)
{
	std::cout << REVERS << str << DEFAULT << std::endl;
}

template<typename T>
void print_arr(T arr)
{ 
  	for (typename T::iterator i = arr.begin(); i < arr.end(); i++)
    	std::cout << *i << " ";
	std::cout << std::endl;
}

template<typename T, typename R>
void fill_arr(T *arr, int size, R num)
{
	for (int i = 0; i < size; i++)
		arr->push_back(i + num);
}

template<typename T, typename R>
void test(T arr, R search)
{
	try
	{
		std::cout << "search= " << search << std::endl;
		typename T::iterator a = easyfind(arr, search);
		std::cout << "*a= " << *a << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
