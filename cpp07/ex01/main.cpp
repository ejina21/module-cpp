#include "iter.hpp"

template<typename T>
void print(T &el)
{
	std::cout << el << std::endl;
}

int main()
{
	int array[] = {1,2,3,4,5};
	char array1[] = {'a', 'b', 'c'};
	iter(array, 5, print);
	iter(array1, 3, print);
}

