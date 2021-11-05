#ifndef A_HPP
#define A_HPP
#include "Base.hpp"

class A: public Base
{
public:
	A();
	A(A const &copy);
	virtual ~A();
	A& operator=(A const &copy);
	void tellType(void);
};

#endif