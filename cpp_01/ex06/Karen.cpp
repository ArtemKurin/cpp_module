#include "Karen.hpp"

Karen::Karen()
{

}

Karen::~Karen(void)
{

}

void	Karen::complain(std::string lvl)
{
	int			i = 0;
	std::string names[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	while (i < 4 && lvl != names[i])
		i++;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
				break ;
		default:
			std::cout << "Bad command"<< std::endl;
				break;

	}
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