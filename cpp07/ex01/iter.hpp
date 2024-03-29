#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter(T *arr, int size, void (*f)(T &val))
{
	for (int i = 0; i < size; i++)
		(*f)(arr[i]);
}

#endif