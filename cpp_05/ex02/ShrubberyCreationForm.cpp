#include "ShrubberyCreationForm.hpp"

std::string ShrubberyCreationForm::name = "Shrubbery Creation";

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreationForm", 145, 137), target("does not exist")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form(other), target(other.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	this->target = other.target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	if (!this->getStatus())
		throw UnsignedFormException();
	std::string const outName = (this->target + "_shrubbery");
	std::ofstream outfile(outName, std::ios::out | std::ios::app);
	if (!outfile.is_open() || outfile.bad() || !outfile.good())
		throw FileOpenException();
	int treeCount = (rand() % 7) + 1;
	for (int i = 0; i < treeCount; i++)
		outfile << TREE;
	outfile << std::endl;
	outfile.close();
}