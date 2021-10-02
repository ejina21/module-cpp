#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zomb;

	try
	{
		zomb = new Zombie(name);
	}
	catch (std::bad_alloc ba)
	{
		std::cout << "Память не выделена" << std::endl;
		std::cout << ba.what() << std::endl;
		return NULL;
	}
	return zomb;
}
