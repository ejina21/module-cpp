#ifndef CPP01_WEAPON_H
#define CPP01_WEAPON_H
#include <iostream>

class Weapon
{
	std::string type;

public:
	Weapon();
	Weapon(std::string type);
	std::string &getType();
	void setType(const std::string &type);

};
#endif //CPP01_WEAPON_H
