#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zomb = new Zombie[N];
	int i = 0;

	while (i < N)
	{
		zomb[i].change_name(name);
		i++;
	}
	return zomb;
}
