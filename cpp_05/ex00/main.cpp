#include "Bureaucrat.hpp"

void	setGrade(Bureaucrat b, char how)
{
	try
	{
		if (how == 'd')
			b.downGrade();
		else if (how == 'u')
			b.upGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main (void)
{
	Bureaucrat	b("Bran", 150);
	std::cout << b << std::endl;

	setGrade(b, 'd');
	std::cout << "-------------------" << std::endl;

	for (int i = 0; i < GRADE_MIN - 1; i++)
		b.upGrade();
	std::cout << b << std::endl;
	setGrade(b, 'u');
	std::cout << "-------------------" << std::endl;
	
	try
	{
		Bureaucrat firstTry("Claud", 155);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat firstTry("Mattew", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}