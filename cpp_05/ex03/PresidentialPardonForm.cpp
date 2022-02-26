#include "PresidentialPardonForm.hpp"

std::string PresidentialPardonForm::name = "PresidentialPardonForm";

PresidentialPardonForm::PresidentialPardonForm() :
	Form(name, 25, 5), target("does not exist")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form(name, 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : Form(other), target(other.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	this->target = other.target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	if (!this->getStatus())
		throw UnsignedFormException();
	std::cout << this->target << " : has been pardoned by Zaphod Beeblebrox\n";
}