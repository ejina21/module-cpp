#include "Converter.hpp"

void Convert::c2c(const std::string& str)
{
	if (strInArr(_arr, str) >= 0 || atoi(str.c_str()) < 0 || atoi(str.c_str()) > 127)
		std::cout << "char: impossible" << std::endl;
	else if (strIsNum(str) && (atoi(str.c_str()) < 33 || atoi(str.c_str()) == 127 ))
		std::cout << "char: Non displayable" << std::endl;
	else if (str.length() == 1 && !strIsNum(str))
		std::cout << "char: " << "\'" << str.at(0) << "\'" << std::endl;
	else
		std::cout << "char: " << "\'" << static_cast<char>(atoi(str.c_str())) << "\'" << std::endl;
}

void Convert::c2i(const std::string& str)
{
	if (strInArr(_arr, str) >= 0)
		std::cout << "int: impossible" << std::endl;
	else if (!strIsNum(str))
		std::cout << "int: " << static_cast<int>(str.at(0)) << std::endl;
	else
		std::cout << "int: " << atoi(str.c_str()) << std::endl;
}

void Convert::c2f(const std::string& str)
{
	int	i = strInArr(_arr, str);
	if (i >= 0 && (i == 0 || i == 2 || i == 4))
		std::cout << "float: " << _arr[i + 1] << std::endl;
	else if (i >= 0 && (i == 1 || i == 3 || i == 5))
		std::cout << "float: " << _arr[i] << std::endl;
	else if (!strIsNum(str))
		std::cout << "float: " << static_cast<float>(str.at(0)) << ".0f" << std::endl;
	else
	{
		if (atof(str.c_str()) - atoi(str.c_str()) == 0)
			std::cout << "float: " << atof(str.c_str()) << ".0f" << std::endl;
		else
			std::cout << "float: " << atof(str.c_str()) << "f" << std::endl;
	}
}

void Convert::c2d(const std::string& str)
{
	int	i = strInArr(_arr, str);
	if (i >= 0 && (i == 0 || i == 2 || i == 4))
		std::cout << "double: " << _arr[i] << std::endl;
	else if (i >= 0 && (i == 1 || i == 3 || i == 5))
		std::cout << "double: " << _arr[i - 1] << std::endl;
	else if (!strIsNum(str))
		std::cout << "double1: " << static_cast<double>(str.at(0)) << ".0" << std::endl;
	else
	{
		if (atof(str.c_str()) - atoi(str.c_str()) == 0)
			std::cout << "double: " << atof(str.c_str()) << ".0" << std::endl;
		else
			std::cout << "double: " << atof(str.c_str()) << std::endl;
	}
}

Convert::Convert(){}

Convert::Convert(std::string str): _value(str)
{
	_arr[0] = "-inf";
	_arr[1] = "-inff";
	_arr[2] = "+inf";
	_arr[3] = "+inff";
	_arr[4] = "nan";
	_arr[5] = "nanf";

	int min = std::numeric_limits<int>::min();
	int max = std::numeric_limits<int>::max();

	if (_value.length() > 1)
	{
		if ((strInArr(_arr, _value) == -1 && !strIsNum(_value))
		|| (strIsNum(_value) && (atol(_value.c_str()) < min
		|| atol(_value.c_str()) > max)))
			throw ErrorException();
	}
}

Convert::Convert(const Convert& other)
{
	*this = other;
}

Convert::~Convert (){}

Convert& Convert::operator=(const Convert& other)
{
	this->_value = other._value;
	int	i = 0;
	while (i < 6)
	{
		this->_arr[i] = other._arr[i];
		i++;
	}
	return (*this);
}

void Convert::converting()
{
	c2c(_value);
	c2i(_value);
	c2f(_value);
	c2d(_value);
}