#ifndef C_HPP
#define C_HPP
#include "Base.hpp"

class C: public Base
{
public:
	C();
	C(C const & copy);
	virtual ~C();
	C& operator= (C const& copy);
	void tellType();
};

#endif