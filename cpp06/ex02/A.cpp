#include "A.hpp"

A::A(){}

A::A(A const& other)
{
	*this = other;
}

A::~A(){}

A& A::operator=(A const& copy)
{
	(void)copy;
	return *this;
}

void A::tellType()
{
	std::cout << "A" << std::endl;
}