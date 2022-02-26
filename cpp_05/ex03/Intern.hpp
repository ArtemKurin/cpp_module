#ifndef INTERN_HPP
#define INTERN_HPP

# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
#define ROBOTOMY 0
#define PARDON 1
#define SHURBERRY 2

class Intern
{
	public:
		Intern();
		Intern(Intern const &other);
		virtual ~Intern();

		class FormDoesNotExistException: public std::exception {
			virtual const char* what() const throw()
			{
				return "FormDoesNotExistException : form does not exist";
			}
		};

		Intern &operator=(Intern const &other);
		Form *makeForm(std::string const &formName, std::string const &target) const;

	private:
		static const std::string form_types[3];
};

#endif