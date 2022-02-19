#include "header.hpp"

int	add_contact(PhoneBook *PhoneBook)
{
	Contact		n_contact;
	std::string	str;
	static int	num;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter " + n_contact.get_name(i) + " : ";
		if (!std::getline(std::cin, str))
			return (0);
		if (str.length() == 0)
		{
			std::cout << "Wrong " + n_contact.get_name(i) << std::endl;
			return (1);
		}
		n_contact.set(i, str, num);
	}
	if (num < 8)
		num++;
	PhoneBook->add_contact(n_contact);
	return (1);
}
