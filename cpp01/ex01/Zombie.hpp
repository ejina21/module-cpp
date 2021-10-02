#ifndef CPP01_ZOMBIE_H
#define CPP01_ZOMBIE_H
#include <iostream>

class Zombie
{
	std::string name;

public:
	Zombie();
	Zombie(std::string name);
	void announce();
	void change_name(std::string name);
	~Zombie();
};
#endif //CPP01_ZOMBIE_H
