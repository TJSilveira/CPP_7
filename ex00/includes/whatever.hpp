#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
#include <iomanip>
#include <ostream>

template<typename T>
void	swap(T &elem1, T &elem2)
{
	T temp;

	temp = elem1;
	elem1 = elem2;
	elem2 = temp;	
}

template<typename T>
T	min(T &elem1, T &elem2)
{
	if (elem1 < elem2)
		return (elem1);
	else
		return (elem2);
}

template<typename T>
T	max(T &elem1, T &elem2)
{
	if (elem1 > elem2)
		return (elem1);
	else
		return (elem2);
}

#endif