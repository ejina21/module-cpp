#ifndef MODULE_CPP_KAREN_H
#define MODULE_CPP_KAREN_H
# include <iostream>
class Karen
{
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	void complain( std::string level );
};
#endif //MODULE_CPP_KAREN_H
