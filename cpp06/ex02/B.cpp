#include "B.hpp"

B::B(){}

B::B(B const& copy)
{
	*this = copy;
}

B::~B(){}

B& B::operator=(B const& copy)
{
	(void)copy;
	return *this;
}

void B::tellType()
{
	std::cout << "B" << std::endl;
}