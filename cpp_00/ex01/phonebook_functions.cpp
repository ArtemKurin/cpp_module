#include "header.hpp"

PhoneBook::PhoneBook(void)
{
	this->count = 0;
}

PhoneBook::~PhoneBook(void)
{

}

int	PhoneBook::create_contact(Contact *n_contact)
{
	std::string	str;
	static int	num;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter " + n_contact->get_name(i) + " : ";
		if (!std::getline(std::cin, str))
			return (0);
		if (str.length() == 0)
		{
			std::cout << "Wrong " + n_contact->get_name(i) << std::endl;
			return (2);
		}
		n_contact->set(i, str, num);
	}
	if (num < 8)
		num++;
	return (1);
}

int	PhoneBook::add_contact()
{
	Contact	contact;
	int		flag;

	flag = this->create_contact(&contact);
	if (flag == 1)
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
	if (flag == 0)
		return (0);
	return (1);
}

int	PhoneBook::search_contact()
{
	std::string	str;
	int			index;
	std::cout << "Enter index : ";
	if (!std::getline(std::cin, str))
		return (0);
	index = str[0] - '0';
	if (str.length() != 1 || !isdigit(str[0]) || index > 7 || this->count - 1 < index)
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
