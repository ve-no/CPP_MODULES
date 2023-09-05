#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

class ScalarConverter
{
private:
	std::string _input;
	ScalarConverter();
	ScalarConverter(std::string input);
public:
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &copy);
	ScalarConverter &operator=(const ScalarConverter &copy);

	void toChar();
	void toInt();
	void toFloat();
	void toDouble();

	class NonDisplayableException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	static void convert(std::string input);

};
int isNumber(std::string input);
#endif
