#ifndef HEADER_CPP
# define HEADER_CPP

# include <string>
# include <iomanip>
# include <iostream>

class Contact {
	public:
		Contact();
		virtual ~Contact();

		std::string get(int index);
		std::string	get_name(int index);
		void		set(int index, std::string val, int num);
		void		set_index(int i);

	private:
		static std::string	names[5];
		std::string			field[5];
		int					index;
};

class PhoneBook {
	public:
		PhoneBook(void);
		virtual ~PhoneBook(void);
		int	add_contact();
		int		search_contact(void);

	private:
		int		count;
		Contact contacts[8];
		int	create_contact(Contact *contact);
};

int	add_contact(PhoneBook *PhoneBook);
int	search_contact(PhoneBook *PhoneBook);

#endif