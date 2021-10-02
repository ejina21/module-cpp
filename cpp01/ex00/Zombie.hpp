#ifndef CPP01_ZOMBIE_H
#define CPP01_ZOMBIE_H
#include <iostream>

class Zombie
{
	std::string name;

public:
	Zombie(std::string name);
	void announce();
	~Zombie();
};
#endif //CPP01_ZOMBIE_H
