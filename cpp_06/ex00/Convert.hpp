#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <limits.h>
class Convert
{
	public:
		Convert();
		Convert(Convert const &other);
		~Convert();

		Convert	&operator= (Convert const &other);
		void	convert(char *str);
	private:
		bool	isIncludeChar(char * str);
		void	toInt(char * str);
		void	toChar(char * str);
		void	toFloat(char * str);
		void	toDouble(char * str);
		int		checkNulls(char *str);
};

#endif