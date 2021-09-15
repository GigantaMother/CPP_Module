#include "mutantstack.hpp"

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return (this->c.rend());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const 
{
	return (this->c.rend());
} 

template <typename T>
MutantStack<T>::MutantStack(void): std::stack<T>(){};

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& copy): std::stack<T>(copy){};

template <typename T>
MutantStack<T>::~MutantStack(){};

template <typename T> 
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &copy)
{
	if (this == &copy)
		return (*this);
	std::stack<T>::operator=(copy);
	return (*this);
}
