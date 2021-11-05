#ifndef B_HPP
#define B_HPP
#include "Base.hpp"

class B: public Base
{
public:
	B();
	B(B const & copy);
	virtual ~B();
	B& operator=(B const& copy);
	void tellType();
};

#endif