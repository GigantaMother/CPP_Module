#include "mutantstack.hpp"
# include "mutantstack.cpp"

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

int main()
{
	std::cout << "_______________________________" << std::endl;
	print_revers("TEST1");
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top= " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size= " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "_______________________________" << std::endl;
	print_revers("TEST2");
	MutantStack<int>::reverse_iterator it_r1 = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite_r1 = mstack.rend();
	while (it_r1 != ite_r1)
	{
		std::cout << *it_r1 << std::endl;
		++it_r1;
	}
	std::cout << "_______________________________" << std::endl;
	print_revers("TEST3");
	MutantStack<int> mstack_r;
	mstack_r.push(42);
	mstack_r.push(21);
	mstack_r.push(666);
	mstack_r.push(777);
	mstack_r.push(2048);
	mstack_r.push(1);
	mstack_r.push(911);
	MutantStack<int>::reverse_iterator it_r = mstack_r.rbegin();
	MutantStack<int>::reverse_iterator ite_r = mstack_r.rend();
	while (it_r != ite_r)
	{
		std::cout << *it_r << std::endl;
		++it_r;
	}

	return (0);
}

void print_revers(std::string str)
{
	std::cout << REVERS << str << DEFAULT << std::endl;
}