#include "Converter.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	try
	{
		if (argc != 2)
			throw ErrorException();
		std::string val = argv[1];

		Convert *c = new Convert( val );
		c->converting();

		delete c;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}