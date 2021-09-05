#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>

class NoFind:	public std::exception
{
	virtual const char *what() const throw()
	{
		return ("Element no found");
	}
};

template<typename T>

typename T::iterator	easyfind(T container, int n)
{
	typename T::iterator ret = std::find(container.begin(), container.end(), n);
	if (ret == container.end())
		throw NoFind();
	else
		return (ret);
}

#endif
