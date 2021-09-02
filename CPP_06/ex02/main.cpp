#include <cstdlib>
#include <iostream>

class Base
{
	public:
		virtual ~Base() {}
};

class A: public Base {};

class B: public Base {};

class C: public Base {};

Base *generate(void)
{
	int b = std::rand() % 3;
	Base *ptr;

	if (b == 0)
	{
	 	ptr = new A();
		std::cout << "A constructor" << std::endl;
	}
	else if (b == 1)
	{
		ptr = new B();
		std::cout << "B constructor" << std::endl;
	}
	else
	{
		ptr = new C();
		std::cout << "C constructor" << std::endl;
	}
	return (ptr);
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "?" << std::endl;
}

void identify(Base &p)
{	
	if ((char*)&p == NULL)
	{
		std::cout << "?" << std::endl;
		return ;
	}
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast) {}
}

int main(void)
{
	std::srand(std::time(NULL));

	Base *ptr;
	ptr = generate();
	std::cout << "identify(Base *p)" << std::endl;
	identify(ptr);
	std::cout << "identify(Base *p) p == NULL" << std::endl;
	identify(NULL);
	std::cout << "void identify(Base &p)" << std::endl;
	identify(*ptr);
	std::cout << "void identify(Base &p) p == NULL" << std::endl;
	ptr = NULL;
	identify(*ptr);

	return (0);
}
