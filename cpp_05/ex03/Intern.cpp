#include "Intern.hpp"

const std::string Intern::form_types[3] = {
	"RobotomyRequestForm",
	"PresidentialPardonForm",
	"ShrubberyCreationForm",
};

Intern::Intern()
{

}

Intern::Intern(Intern const&)
{

}

Intern::~Intern()
{

}

Intern &Intern::operator=(Intern const&)
{
	return (*this);
}

Form *Intern::makeForm(std::string const &formName, std::string const &target) const
{
	int	i;
	for (i = 0; i < 3; i++)
		if (formName == form_types[i])
			break ;
	switch (i)
	{
	case ROBOTOMY:
		return (new RobotomyRequestForm(target));
		break;
	case PARDON:
		return (new PresidentialPardonForm(target));
		break;
	case SHURBERRY:
		return (new ShrubberyCreationForm(target));
		break;
	default:
		FormDoesNotExistException();
		break;
	}
	return (NULL);
}