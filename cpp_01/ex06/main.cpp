#include "Karen.hpp"

int main (int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Bad args" << std::endl;
		return (1);
	}
	karen.complain(std::string(argv[1]));
}