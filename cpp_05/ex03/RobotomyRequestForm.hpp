#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
		void execute(Bureaucrat const &executor) const;

		class UnsignedFormException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "RobotomyRequestForm::UnsignedFormException: form is unsigned";
			}
		};

	private:
		RobotomyRequestForm();
		std::string			target;
		static std::string	name;
};

#endif