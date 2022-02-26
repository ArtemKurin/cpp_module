#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

# ifndef GRADE_MIN
#  define GRADE_MIN 150
# endif

# ifndef GRADE_MAX
#  define GRADE_MAX 1
# endif
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &other);
		virtual ~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;
		void		upGrade(void);
		void		downGrade(void);
		void		signForm(Form &form);

		Bureaucrat	&operator= (Bureaucrat const &other);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::GradeTooHighException : grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::GradeTooLowException : grade is too low");
				}
		};

	protected:
		std::string	name;
		int			grade;
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif