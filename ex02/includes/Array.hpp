#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename T>
class Array
{
private:
	T		*ptr;
	size_t	capacity;

public:
		// Constructors
	Array(void);
	Array(size_t capacity);
	Array(const Array& other);

	// Destructor
	~Array(void);

	// Overloaded Operator
	Array&		operator=(const Array& other);
	T&			operator[](size_t index);

	// public methods
	size_t	size(void) const;

	class OutOfBounds: public std::exception
	{
	public:
		virtual const char* what() const throw () {
			return ("Out of range");
		}
	};
};

	// Constructors
template<typename T>
Array<T>::Array(void): ptr(NULL), capacity(0)
{
	std::cout << "[Array] Default constructor called. " <<
				std::endl;
	return;
}

template<typename T>
Array<T>::Array(size_t capacity)
{
	this->ptr = new T[capacity];
	this->capacity = capacity;
	std::cout << "[Array] Capacity constructor called. " <<
			std::endl;
	return;
}

template<typename T>
Array<T>::Array(const Array& other): ptr(NULL), capacity(other.capacity)
{
	this->ptr = new T[this->capacity];
	for (size_t i = 0; i < other.capacity; i++)
		this->ptr[i] = other.ptr[i];
	std::cout << "[Array] Copy constructor called. " <<
				std::endl;
	return;
}

	// Destructor
template<typename T>
Array<T>::~Array(void)
{
	delete[] this->ptr;
}

	// Overloaded Operator
template<typename T>
Array<T>&		Array<T>::operator=(const Array& other)
{
	std::cout << "[Array] Copy assignment operator called. " <<
			std::endl;
	if(this == &other)
		return (*this);
	if (this->capacity > 0)
		delete[] this->ptr;
	
	this->capacity = other.capacity;
	this->ptr = new T[capacity];

	for (size_t i = 0; i < this->capacity; i++)
		this->ptr[i] = other.ptr[i];
	return (*this);
}

template<typename T>
T&		Array<T>::operator[](size_t index)
{
	if (index >= capacity)
		throw Array::OutOfBounds();
	else
		return (this->ptr[index]);
}

template<typename T>
size_t	Array<T>::size(void) const
{
	return (this->capacity);
}

#endif