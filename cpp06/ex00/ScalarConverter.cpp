#include "ScalarConverter.hpp"
#include <iomanip>
#include <limits>
#include <sstream>


char		ScalarConverter::c = 0;
long int	ScalarConverter::i = 0;
float		ScalarConverter::f = 0.0f;
double		ScalarConverter::d = 0.0;
char		ScalarConverter::type = 'e';

int		ScalarConverter::c_err = 0;
int		ScalarConverter::i_err = 0;
int		ScalarConverter::f_err = 0;
int		ScalarConverter::d_err = 0;

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

char ScalarConverter::getType(std::string const &literal)
{
	if (literal.length() == 1 && !isdigit(literal.at(0)))
		return 'c';
	else if (!literal.compare("+inf") || !literal.compare("-inf") || !literal.compare("nan"))
	{
		ScalarConverter::i_err = 1;
		ScalarConverter::c_err = 1;
		return 'd';
	}
	else if (!literal.compare("+inff") || !literal.compare("-inff") || !literal.compare("nanf"))
	{
		ScalarConverter::i_err = 1;
		ScalarConverter::c_err = 1;
		return 'f';
	}
	return(is_number(literal));
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &sc)
{
	(void) sc;
	return (*this);
}

void	ScalarConverter::convert(const std::string &literal)
{
	ScalarConverter::type = getType(literal);	

	switch (ScalarConverter::type)
	{
		case 'c':	
			ScalarConverter::c = literal.at(0);
			ScalarConverter::i = static_cast<int>(ScalarConverter::c);
			ScalarConverter::d = static_cast<double>(ScalarConverter::c);
			ScalarConverter::f = static_cast<float>(ScalarConverter::c);
			break;
		case 'f':
			errno = 0;
			ScalarConverter::f = strtof(literal.c_str(), NULL);
			if (errno == ERANGE || ScalarConverter::f == HUGE_VALF || ScalarConverter::f == -HUGE_VALF)
				ScalarConverter::f_err = 1;
			ScalarConverter::c = static_cast<char>(ScalarConverter::f);
			ScalarConverter::d = static_cast<double>(ScalarConverter::f);
			ScalarConverter::i = static_cast<int>(ScalarConverter::f);
			break;
		case 'i':
			ScalarConverter::i = strtol(literal.c_str(), NULL, 10);
			if (ScalarConverter::i > INT_MAX || ScalarConverter::i < INT_MIN)
				ScalarConverter::i_err = 1;
			ScalarConverter::c = static_cast<char>(ScalarConverter::i);
			ScalarConverter::d = static_cast<double>(ScalarConverter::i);
			ScalarConverter::f = static_cast<float>(ScalarConverter::i);
			break;
		case 'd':
			errno = 0;
			ScalarConverter::d = strtod(literal.c_str(), NULL);
			if (errno == ERANGE || ScalarConverter::d == DBL_MAX || ScalarConverter::d == DBL_MIN)
				ScalarConverter::d_err = 1;
			ScalarConverter::c = static_cast<char>(ScalarConverter::d);
			ScalarConverter::i = static_cast<int>(ScalarConverter::d);
			ScalarConverter::f = static_cast<float>(ScalarConverter::d);
			break;
	}
	ScalarConverter::checkErrors();
	ScalarConverter::printResults();
}

void ScalarConverter::checkErrors(void)
{
	if (ScalarConverter::d < -127 || ScalarConverter::d > 127)
		ScalarConverter::c_err = 1;
	if (ScalarConverter::type == 'i' && ScalarConverter::i_err)
	{
		ScalarConverter::d_err = 1;
		ScalarConverter::f_err = 1;
		ScalarConverter::c_err = 1;
	}
 	if (ScalarConverter::type == 'f')
	{
		if (ScalarConverter::f < INT_MIN || ScalarConverter::f > INT_MAX)
			ScalarConverter::i_err = 1;
		if (ScalarConverter::f_err)
		{
			ScalarConverter::d_err = 1;
			ScalarConverter::i_err = 1;
			ScalarConverter::c_err = 1;
		}
	}
	if (ScalarConverter::type == 'd')
	{
		if (ScalarConverter::d < static_cast<double>(std::numeric_limits<int>::min()) \
			|| ScalarConverter::d > static_cast<double>(std::numeric_limits<int>::max()))
			ScalarConverter::i_err = 1;
		if (ScalarConverter::d_err)
		{
			ScalarConverter::f_err = 1;
			ScalarConverter::i_err = 1;
			ScalarConverter::c_err = 1;
		}
	}
}

void ScalarConverter::printResults(void)
{
	if (ScalarConverter::c_err || ScalarConverter::type == 'e')
		std::cout << "char: impossible" << std::endl;
	else if (ScalarConverter::c > 31 && ScalarConverter::c < 127)
		std::cout << "char: '" << ScalarConverter::c << "'"<< std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (ScalarConverter::i_err || ScalarConverter::type == 'e')
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << ScalarConverter::i << std::endl;
	if (ScalarConverter::f_err || ScalarConverter::type == 'e')
		std::cout << "float: impossible" << std::endl;
	else
	{
		std::cout << "float: ";
		if (ScalarConverter::f - static_cast<int>(ScalarConverter::f) == 0)
			std::cout << ScalarConverter::f << ".0f" << std::endl;
		else
			std::cout << ScalarConverter::f << "f" << std::endl;
	}
	if (ScalarConverter::d_err || ScalarConverter::type == 'e')
		std::cout << "double: impossible" << std::endl;
	else
	{
		std::cout << "double: ";
		if (ScalarConverter::d - static_cast<int>(ScalarConverter::d) == 0)
			std::cout << ScalarConverter::d << ".0" << std::endl;
		else
			std::cout << ScalarConverter::d << std::endl;
	}
}

char is_number(std::string const &str)
{
	bool is_d = false;
	for (size_t i = 0; i < str.length(); i++)
	{
		if ((str[i] == '+' || str[i] == '-') && i == 0)
			continue;
		else if (!std::isdigit(str[i]))
		{
			if(str[i] == '.')
			{
				is_d = true;
				continue;
			}
			else if(str[i] == 'f' && is_d)
				return 'f';
			else if(str[i] != 'f' || !is_d)
				return 'e';
			else
				return 'e';
		}
	}
	if(is_d)
		return 'd';
	else
		return 'i';
}
