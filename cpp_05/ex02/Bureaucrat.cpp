#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (this->grade < GRADE_MAX)
		throw GradeTooHighException();
	if (this->grade > GRADE_MIN)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	this->name = other.name;
	this->grade = other.grade;
}

Bureaucrat::~Bureaucrat()
{

}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int			Bureaucrat::getGrade() const
{
	return (this->grade);
}

void		Bureaucrat::upGrade(void)
{
	if (this->grade <= GRADE_MAX)
		throw GradeTooHighException();
	this->grade--;
}

void		Bureaucrat::downGrade(void)
{
	if (this->grade >= GRADE_MIN)
		throw GradeTooLowException();
	this->grade++;
}

void		Bureaucrat::signForm(Form &form)
{
	if (form.getStatus())
	{
		std:: cout << this->name << " could not sign " << form.getName() << ", because form already signed." << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << this->name << " could not sign " << form.getName() << ", because " << e.what() << std::endl;
	}
}

		#include <unistd.h>
void Bureaucrat::executeForm(Form const & form)
{
	if (form.getGradeToExecute() < this->grade)
		GradeTooLowException();
	try
	{
		form.execute(*this);
	}
	catch (const std::exception& e)
	{
		std::cout << this->name << " could not execute " << form.getName() << ", because " << e.what() << std::endl;
	}
}

Bureaucrat	&Bureaucrat::operator= (Bureaucrat const &other)
{
	this->name = other.name;
	this->grade = other.grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (o);
}
