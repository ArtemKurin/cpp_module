#include "header.hpp"

PhoneBook::PhoneBook(void)
{
	this->count = 0;
}

PhoneBook::~PhoneBook(void)
{

}

void	PhoneBook::add_contact(Contact contact)
{
	if (this->count < 8)
	{
		contacts[this->count] = contact;
		this->count++;
	}
	else
	{
		for (int i = 0; i < 7; i++)
		{
			contacts[i] = contacts[i + 1];
			contacts[i].set_index(i);
		}
		contacts[this->count - 1] = contact;
	}
}

int	PhoneBook::search_contact()
{
	std::string	str;
	int			index;
	std::cout << "Enter index : ";
	if (!std::getline(std::cin, str))
		return (0);
	if (str.length() > 1 || !isdigit(str[0]))
	{
		std::cout << "Wrong index" << std::endl;
		return (1);
	}
	index = str[0] - '0';
	if (index > 7 || this->count - 1 < index)
	{
		std::cout << "Wrong index" << std::endl;
		return (1);
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|" << std::setw(10) << index;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (this->contacts[index].get(i).length() > 10)
			std::cout << this->contacts[index].get(i).substr(0,9) << '.';
		else
			std::cout << std::setw(10) << this->contacts[index].get(i);
	}
	std::cout << "|" << std::endl;
	return (1);
}
