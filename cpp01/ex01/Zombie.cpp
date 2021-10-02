#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << "<" << this->name;
	std::cout << "> BraiiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " is dead!" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{}

void Zombie::change_name(std::string name)
{
	this->name = name;
}