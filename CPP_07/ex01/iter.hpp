#ifndef ITER_HPP
# define  ITER_HPP

template<typename T>

void    iter(T (*array), int size, void (*f)(T &t))
{
    for (int i = 0; i < size; i++)
    	f(array[i]);
}

template<typename T>

void funk1(T &t)
{
	t = t * (-1);
}

template<typename T>

void funk2(T &t)
{
	t = t + 1;
}

template<typename T>

void print_array(T (*array), int size)
{
	size--;
	for (int i = 0; i < size; i++)
		std::cout << array[i] << ", ";
	std::cout << array[1] << "." << std::endl;
}

#endif
