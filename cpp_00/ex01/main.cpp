#include "header.hpp"

int	main(void)
{
	std::string	str;
	PhoneBook phone_book;

	while (1)
	{
		std::cout << "> ";
		if (!std::getline(std::cin, str))
			return (1);
		if (str == "ADD")
		{
			if (!phone_book.add_contact())
				return (1);
		}
		else if (str == "SEARCH")
		{
			if (!phone_book.search_contact())
				return (1);
		}
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Wrong command" << std::endl;
	}
	return (0);
}