#include "Convert.hpp"

Convert::Convert()
{

}

Convert::Convert(Convert const &)
{

}

Convert::~Convert()
{

}

Convert	&Convert::operator= (Convert const &)
{
	return (*this);
}
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
void	Convert::convert(char *str)
{
	this->toInt(str);
	this->toChar(str);
	this->toFloat(str);
	this->toDouble(str);
}

int	Convert::checkNulls(char *str)
{
	int i = 1;
	while(str[i])
		if (str[i++] != '0')
			return (0);
	return (1);
}

bool	Convert::isIncludeChar(char * str)
{
	int	countE = 0;
	size_t i = 0;

	if (str[i] == 'e' || str[i] == '.')
		return (true);
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
		if (!std::isdigit(str[i]))
			return (true);
	}
	for (; i < std::string(str).length(); i++)
	{
		if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != '+' && str[i] != '-' && str[i] != 'e')
			return (true);
		if (str[i] == '.' && (!std::isdigit(str[i - 1]) || i == (std::string(str).length() - 1)))
			return (true);
		if ((str[i] == '+' || str[i] == '-') && str[i - 1] != 'e')
			return (true);
		if (str[i] == 'e')
		{
			if (countE == 1)
				return (true);
			countE++;
		}
	}
	return (false);
}

void	Convert::toInt(char * str)
{
	double	maxInt = 2147483647.0;
	double	minInt = -2147483648.0;
	double	i = atof(str);

	std::cout << "Int = ";
	if (this->isIncludeChar(str))
	{
		std::cout << "impossible\n";
		return ;
	}
	else if (i >= minInt && i <= maxInt)
		std::cout<< static_cast<int>(i)<< std::endl;
	else
		std::cout << "impossible\n";
}

void	Convert::toChar(char *str)
{
	int i;
	std::cout << "Char = ";
	if (std::string(str).length() == 1 && (*str < 127 && *str > 31))
	{
		std::cout << static_cast<char>(*str) << std::endl;
		return ;
	}
	i = atof(str);
	if(i < 0 || i > 127 || isIncludeChar(str))
		std::cout << "impossible"<< std::endl;
	else if (i > 31)
		std::cout<< static_cast<char>(i)<< std::endl;
	else
		std::cout << "non printable"<< std::endl;
}

void	Convert::toFloat(char * str)
{
	char	*str1 = strchr(str, '.');
	int		printSuff = str1 == NULL ? 1 : checkNulls(str1);
	double	number = static_cast<float>(atof(str));
	std::cout << "Float = ";
	if (number == INFINITY || number == -INFINITY)
	{
		std::cout << static_cast<double>(number) << "f" << std::endl;
		return ;
	}
	if (this->isIncludeChar(str))
	{
		std::cout << "nanf\n";
		return ;
	}
	if (printSuff)
		std::cout<< static_cast<float>(std::atof(str)) << ".0f" << std::endl;
	else
		std::cout<< static_cast<float>(std::atof(str)) << "f" << std::endl;
}

void	Convert::toDouble(char *str)
{
	char	*str1 = strchr(str, '.');
	int		printSuff = str1 == NULL ? 1 : checkNulls(str1);
	double	number = atof(str);
	std::cout << "Double = ";
	if (number == INFINITY || number == -INFINITY)
	{
		std::cout << static_cast<double>(number) << std::endl;
		return ;
	}
	if (this->isIncludeChar(str))
		std::cout << "nan\n";
	else
	{
		if (printSuff)
			std::cout << static_cast<double>(number) << ".0" << std::endl;
		else
			std::cout << static_cast<double>(number) << std::endl;
	}
}
