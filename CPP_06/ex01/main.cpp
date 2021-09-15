#include <iostream>

struct Data
{
	int	d;
};

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data		*d1 = new Data;
	Data		*d2;
	uintptr_t	ptr;

	d1->d = 42;
	std::cout << "d1->d: " << d1->d << std::endl;
	std::cout << "d1: " << d1 << std::endl;
	std::cout << "&d1: " << &d1 << std::endl;
	std::cout << "______________"<< std::endl;
	ptr = serialize(d1);
	d2 = deserialize(ptr);
	std::cout << "______________"<< std::endl;
	std::cout << "d2->d: " << d2->d << std::endl;
	std::cout << "d2: " << d2 << std::endl;
	std::cout << "&d2: " << &d2 << std::endl;

	delete d1;

	return (0);
}
