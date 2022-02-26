#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

# define TREE	"         *\n" \
				"        /|\\\n" \
				"       /*|O\\\n" \
				"      /*/|\\*\\\n" \
				"     /X/O|*\\X\\\n" \
				"    /*/X/|\\X\\*\\\n" \
				"   /O/*/X|*\\O\\X\\\n" \
				"  /*/O/X/|\\X\\O\\*\\\n" \
				" /X/O/*/X|O\\X\\*\\O\\\n" \
				"/O/X/*/O/|\\X\\*\\O\\X\\\n" \
				"        |X|\n" \
				"        |X|\n"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
		void execute(Bureaucrat const &executor) const;
		
		class FileOpenException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "ShrubberyCreationFormException::FileOpenException: Cannot open file";
			}
		};

		class UnsignedFormException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "ShrubberyCreationFormException::UnsignedFormException: form is unsigned";
			}
		};

	private:
		ShrubberyCreationForm();
		std::string			target;
		static std::string	name;
};

#endif