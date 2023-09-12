#pragma once
#include <iostream>

template <typename T, typename F>

void iter (T *arr, size_t size, F func)
{
	for (size_t i = 0; i < size; i++)
		func(arr[i]);
}

template< typename T>
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}
