#include <string>
#include <iostream>

int	main(void)
{
	std::string	variable = "HI THIS IS BRAIN";
	std::string	*stringPTR = &variable;
	std::string	&stringREF = variable;

	std::cout << "addres : " << &variable << std::endl;
	std::cout << "addres : " << stringPTR << std::endl;
	std::cout << "addres : " << &stringREF << std::endl;

	std::cout << "value : " + variable << std::endl;
	std::cout << "value : " + *stringPTR << std::endl;
	std::cout << "value : " + stringREF << std::endl;
}