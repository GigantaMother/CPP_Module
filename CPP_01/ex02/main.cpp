#include <iostream>
#include <iomanip>

int main(void)
{
	std::cout << "______________________________________" << std::endl;
	std::string str = "HI THIS IS BRAIN";
	std::cout << std::setw(30) << "str= " << str << std::endl;
	std::cout << std::setw(30) << "str(addr)= " << &str << std::endl;
	std::cout << "______________________________________" << std::endl;
	std::string *stringPTR = &str;
	std::cout << std::setw(30) << "stringPTR= " << *stringPTR << std::endl;
	std::cout << std::setw(30) << "stringPTR(addr)= " << stringPTR << std::endl;
	std::cout << std::setw(30) << "stringPTR(addr pointer)= " << &stringPTR << std::endl;
	std::cout << "\033[31m stringPTR(addr) != str(addr) \033[0m" << std::endl;
	std::cout << "______________________________________" << std::endl;
	std::string &stringREF = str;
	std::cout << std::setw(30) << "stringREF= " << stringREF << std::endl;
	std::cout << std::setw(30) << "stringREF(addr)= " << &stringREF << std::endl;
	std::cout << "\033[32m stringREF(addr) == str(addr) \033[0m" << std::endl;
	std::cout << "______________________________________" << std::endl;

	return (0);
}