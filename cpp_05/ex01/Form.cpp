#include "Form.hpp"

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) :
	name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), isSigned(false)
{
	if (this->gradeToExecute > GRADE_MIN || this->gradeToSign > GRADE_MIN)
		throw GradeTooLowException();
	if (this->gradeToSign < GRADE_MAX || this->gradeToExecute < GRADE_MAX)
		throw GradeTooHighException();
}

Form::Form(Form const &other) :
	name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute), isSigned(other.isSigned)
{

}
Form::~Form()
{

}

std::string	Form::getName() const
{
	return (this->name);
}

int	Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int	Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

bool		Form::getStatus(void) const
{
	return (this->isSigned);
}

void		Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->getGradeToSign())
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

Form	&Form::operator= (Form const &other)
{
	this->isSigned = other.isSigned;
	std::cout << "Name and grades are const and can't be overwritten" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Form &form)
{
	std::string	status = form.getStatus() ? "signed" : "not signed";
	o << form.getName() << "\t" << "grade needed execute : " << form.getGradeToExecute() << ", grade needed sign : " << form.getGradeToSign() << ", status : " << status;
	return (o);
}