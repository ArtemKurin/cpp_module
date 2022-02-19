#include "Karen.hpp"

Karen::Karen()
{

}

Karen::~Karen(void)
{

}

void	Karen::complain(std::string fnName, std::string lvl)
{
	void	(Karen::*functions[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string names[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int			i = 0;
	while (i < 4 && lvl != names[i])
		i++;
	while (i < 4 && fnName != names[i])
		i++;
	if (i != 4)
		(this->*functions[i])();
}

void	Karen::debug(void)
{
	std::cout << "DEBUG" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "ERROR" << std::endl;
}
	
void	Karen::info(void)
{
	std::cout << "INFO" << std::endl;
}
void	Karen::warning(void)
{
	std::cout << "WARNING" << std::endl;
}