#include "Bureaucrat.hpp"

void	tryCreateForm(std::string name, const int gradeToSign, const int gradeToExecute)
{
	static int counter;
	std::cout << "Create form try no. " << ++counter << "\t";
	try
	{
		Form form(name, gradeToSign, gradeToExecute);
		std::cout << form.getName() << " created" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	trySignForm(const int gradeToSign, const int gradeToExecute)
{
	static int counter;
	std::cout << "Sign form try no. " << ++counter << "\t";
	try
	{
		Form form("formTestSignForm", gradeToSign * 100, gradeToExecute);
		Bureaucrat b("Joe", gradeToSign + 5);
		b.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main (void)
{
	int counter = 0;
	std::cout << "----------test Create form gradeToSign----------\n" << std::endl;
	for (int i = 0; i < 110; i += 30)
		tryCreateForm("form", i * 2, i);

	std::cout << "\n----------test Create form gradeToExecute----------\n" << std::endl;
	for (int i = 0; i < 110; i += 30)
		tryCreateForm("form", i, i * 2);

	std::cout << "\n----------test Bureaucrat::signForm and Form::beSigned----------\n" << std::endl;
	for (; counter < 3; counter++)
		trySignForm(counter, counter);
	std::cout << "Sign form try no. " << ++counter << "\t";
	Form form("formTestSignForm",  100, 100);
	Bureaucrat b("Joe",  5);
	b.signForm(form);
	std::cout << "Sign form try no. " << ++counter << "\t";
	b.signForm(form);

	std::cout << "\n----------test Form::operator<<----------\n" << std::endl;
	std::cout << "Test try no. 1" << "\t\t";
	std::cout << form << std::endl;
}