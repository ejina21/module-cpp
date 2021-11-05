#include "C.hpp"

C::C(){}

C::C(C const& copy)
{
	*this = copy;
}

C::~C(){}

C& C::operator=(C const& copy)
{
	(void)copy;
	return *this;
}

void C::tellType()
{
	std::cout << "C" << std::endl;
}