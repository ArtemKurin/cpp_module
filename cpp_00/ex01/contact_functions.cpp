#include "header.hpp"

std::string Contact::names[5] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Darkest secret"
};

Contact::Contact()
{

}
Contact::~Contact()
{
	
}

std::string Contact::get_name(int index)
{
	return (this->names[index]);
}

std::string Contact::get(int index)
{
	return (this->field[index]);
}

void	Contact::set(int index, std::string val, int num)
{
	this->field[index] = val;
	this->index = num;
}

void	Contact::set_index(int i)
{
	this->index = i;
}