#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void	iter(T array[], const size_t &length, void (*function)(T &))
{
	if (array == NULL || function == NULL)
		return ;
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}

#endif