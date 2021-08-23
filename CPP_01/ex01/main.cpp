#include "Zombie.hpp"

int	main(void)
{
	int 	N;
	Zombie	*zom;

	N = 5;
	std::cout << "Hello" << std::endl;

	zom = zombieHorde(N, "Alex");
	for (int i = 0; i < N; i++)
		zom->announce();
	delete [] zom;

	return (0);
}
