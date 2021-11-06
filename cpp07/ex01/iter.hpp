#ifndef MODULE_CPP_ITER_HPP
#define MODULE_CPP_ITER_HPP
#include <iostream>

template <typename T>
void iter(T *array, int len, void (*func)(T &el))
{
	for (int i = 0; i < len; i++)
		func(array[i]);
}
#endif //MODULE_CPP_ITER_HPP
