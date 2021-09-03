#include <iostream>
#include "iter.hpp"

int main(void)
{
	const int n = 5; 
	std::cout << "________________________" << std::endl;
	int array1[5] = {1, 42, 666, 21, 777};
	print_array(array1, n);
	iter(array1, 5, funk1);
	print_array(array1, n);
	std::cout << "________________________" << std::endl;
	float array2[5] = {1.2, 42.43, 666.777, 21.9, 777.42};
	print_array(array2, n);
	iter(array2, 5, funk1);
	print_array(array2, n);
	std::cout << "________________________" << std::endl;
	char array3[5] = {'a', '!', 'l', 'm', '9'};
	print_array(array3, n);
	iter(array3, 5, funk2);
	print_array(array3, n);


	std::cout << "________________________" << std::endl;
	return (0);
}
