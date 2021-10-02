#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	int n = 4;
	Zombie *zomb;

	zomb = zombieHorde(n + 1, "Ork");
	while (n >= 0)
	{
		zomb[n].announce();
		n--;
	}
	delete[] zomb;
}