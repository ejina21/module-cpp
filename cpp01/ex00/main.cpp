#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
	Zombie *zomb;

	zomb = newZombie("Ork");
	zomb->announce();
	delete zomb;
	randomChump("Shreder");
}