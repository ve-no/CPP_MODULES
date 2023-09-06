#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : _input("") {}

ScalarConverter::ScalarConverter(std::string input) : _input(input) {}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {*this = copy;}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	if (this != &copy)
	{
		this->_input = copy._input;
	}
	return (*this);
}

const char *ScalarConverter::NonDisplayableException::what() const throw()
{
	return ("Non displayable ");
}

void ScalarConverter::toChar()
{
	if (!isNumber(this->_input))
		throw std::exception();
	std::istringstream iss(this->_input);
	int c;
	iss >> c;
	if (c < 32 || c > 126)
		throw NonDisplayableException();
	std::cout << "char: " << static_cast<char>(c) << std::endl;
}

void ScalarConverter::toInt()
{
	if (!isNumber(this->_input))
		throw std::exception();
	std::istringstream iss(this->_input);
	int i;
	iss >> i;

	i = static_cast<int>(i);
	std::cout << "int: " << i << std::endl;
}

void ScalarConverter::toFloat()
{
	if (!isNumber(this->_input))
		throw std::exception();
	std::istringstream iss(this->_input);
	float f;
	iss >> f;
	f = static_cast<float>(f);
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
}

void ScalarConverter::toDouble()
{
	if (!isNumber(this->_input))
		throw std::exception();
	std::istringstream iss(this->_input);
	double d;
	iss >> d;
	d = static_cast<double>(d);
	std::cout << "double: " << d << std::endl;

}

void ScalarConverter::convert(std::string input)
{
	ScalarConverter sc(input);
	try
	{
		sc.toChar();
	}
	catch (ScalarConverter::NonDisplayableException &e)
	{
		std::cout << "char: "<< e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "char: "<< "Imposible" << std::endl;
	}
	try
	{
		sc.toInt();
	}
	catch (std::exception &e)
	{
		std::cout << "int: "<< "Imposible" << std::endl;
	}
	try
	{
		sc.toFloat();
	}
	catch (std::exception &e)
	{
		std::cout << "float: "<< "nanf" << std::endl;
	}
	try
	{
		sc.toDouble();
	}
	catch (std::exception &e)
	{
		std::cout << "double: "<< "nan" << std::endl;
	}
}

int isNumber(std::string input)
{
	int i = 0;
	int count = 0;
	if (input[i] == '+' || input[i] == '-')
		i++;
	for(; i < (int)input.length() - 1; i++)
	{
		if (input[i] == '.') {
			count++;
			if (count > 1)
				return (0);
		}
		else if (!isdigit(input[i]))
			return (0);
	}
	if (!isdigit(input[i]) && input[i] != 'f')
		return (0);
	return (1);
}
