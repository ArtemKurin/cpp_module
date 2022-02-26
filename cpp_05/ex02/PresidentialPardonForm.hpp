#ifndef PresidentialPardomForm_HPP
#define PresidentialPardomForm_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
		void execute(Bureaucrat const &executor) const;

		class UnsignedFormException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "PresidentialPardonForm::UnsignedFormException: form is unsigned";
			}
		};

	private:
		PresidentialPardonForm();
		std::string			target;
		static std::string	name;
};

#endif