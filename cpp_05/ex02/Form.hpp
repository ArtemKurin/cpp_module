#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Form;
#include "Bureaucrat.hpp"

# ifndef GRADE_MIN
#  define GRADE_MIN 150
# endif

# ifndef GRADE_MAX
#  define GRADE_MAX 1
# endif

class Form
{
	public:
		Form();
		Form(std::string const name, int gradeToSign, int gradeToExecute);
		Form(Form const &other);
		virtual ~Form();

		std::string		getName() const;
		int				getGradeToSign() const;
		int 			getGradeToExecute() const;
		bool			getStatus(void) const;
		void			beSigned(Bureaucrat &b);
		virtual void	execute(Bureaucrat const &executor) const = 0;
		
		Form			&operator= (Form const &other);

		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Form::GradeTooHighException : grade is too high");
			}
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Form::GradeTooLowException : grade is too low");
			}
		};

	private:
		std::string	const name;
		int const		gradeToSign;
		int const		gradeToExecute;
		bool			isSigned;
};

std::ostream &operator<<(std::ostream &o, const Form &form);

#endif