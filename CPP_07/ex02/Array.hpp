#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>

class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int size);
		Array(const Array &copy);
		~Array(void);

		unsigned int	getSize(void) const;

		Array			&operator=(const Array &copy);
		T				&operator[](unsigned int index);
};

template <typename T>

Array<T>::Array(void)
{
	//std::cout << "constructor(0)" << std::endl;
	this->_size = 0;
	this->_array = NULL;
}

template <typename T>

Array<T>::Array(unsigned int size)
{
	//std::cout << "constructor(1)" << std::endl;
	this->_size = size;
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = 0;
}

template <typename T>

Array<T>::Array(const Array &copy)
{
	//std::cout << "copy" << std::endl;
	this->_size = copy.getSize();
	this->_array = new T[this->_size];
    for (unsigned int i = 0; i < this->_size; i++)
    	this->_array[i] = copy._array[i];
}

template <typename T>

Array<T>::~Array(void)
{
	//std::cout << "destructor" << std::endl;
	delete[] this->_array;
}

template <typename T>

unsigned int	Array<T>::getSize(void) const
{
	return (this->_size);
}

template <typename T>

Array<T>	&Array<T>::operator=(const Array &copy)
{
	//std::cout << "operator=" << std::endl;
	if (this == copy)
        return (this);
	this->_size = copy.getSize();
    this->_array = new T[this->_size];
    for (unsigned int i = 0; i < this->_size; i++) 
		this->_array[i] = copy._array[i];
    return (*this);
}

template <typename T>

T		&Array<T>::operator[](unsigned int index)
{
	//std::cout << "operator[]" << std::endl;
	if (index < 0 || index >= this->_size)
		throw std::out_of_range("invalid index");
	else
		return _array[index];
}

#endif
