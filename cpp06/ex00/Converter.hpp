#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <string>
#include <limits>
#include <stdlib.h>

class ErrorException: public std::exception
{
public:
	virtual const char *what() const throw()
	{return "Error";};
};

class Convert
{
	std::string	_value;
	std::string	_arr[6];

	void c2c(const std::string& val);
	void c2i(const std::string& val);
	void c2f(const std::string& val);
	void c2d(const std::string& val);

public:
	Convert();
	Convert(std::string str);
	Convert(const Convert& copy);
	~Convert();
	Convert& operator=(const Convert& other);
	void converting();
};

bool strIsNum(const std::string str);
int strInArr(const std::string arr[6], const std::string& str);

#endif