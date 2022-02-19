#include "header.hpp"

int	main(void)
{
	std::string	str;
	PhoneBook PhoneBook;

	while (1)
	{
		std::cout << "> ";
		if (!std::getline(std::cin, str))
			return (1);
		if (str == "ADD")
		{
			if (!add_contact(&PhoneBook))
				return (1);
		}
		else if (str == "SEARCH")
		{
			if (!PhoneBook.search_contact())
				return (1);
		}
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Wrong command" << std::endl;
	}
	return (0);
}