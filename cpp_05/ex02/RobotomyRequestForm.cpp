#include "RobotomyRequestForm.hpp"

std::string RobotomyRequestForm::name = "Shrubbery Creation";

RobotomyRequestForm::RobotomyRequestForm() :
	Form(name, 72, 45), target("does not exist")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	Form(name, 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form(other), target(other.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	this->target = other.target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	if (!this->getStatus())
		throw UnsignedFormException();
	if (rand() % 2)
		std::cout << this->target << " : robotomized successfully\n";
	else
		std::cout << this->target << " : robotomy failed\n";
}