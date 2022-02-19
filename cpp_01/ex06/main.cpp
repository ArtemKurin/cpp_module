#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Bad args" << std::endl;
		return (1);
	}
	karen.complain("DEBUG", std::string(argv[1]));
	karen.complain("INFO", std::string(argv[1]));
	karen.complain("DEBUG", std::string(argv[1]));
	karen.complain("INFO", std::string(argv[1]));
	karen.complain("WARNING", std::string(argv[1]));
	karen.complain("ERROR", std::string(argv[1]));
	karen.complain("WARNING", std::string(argv[1]));
	karen.complain("WARNING", std::string(argv[1]));
	karen.complain("ERROR", std::string(argv[1]));
	karen.complain("ERROR", std::string(argv[1]));

	karen.complain("ACDC", std::string(argv[1]));
	karen.complain("LENIN", std::string(argv[1]));
	
	karen.complain("ERROR", std::string(argv[1]));
	karen.complain("DEBUG", std::string(argv[1]));
	karen.complain("INFO", std::string(argv[1]));
	karen.complain("DEBUG", std::string(argv[1]));
	karen.complain("INFO", std::string(argv[1]));
	karen.complain("WARNING", std::string(argv[1]));
	karen.complain("ERROR", std::string(argv[1]));
	karen.complain("WARNING", std::string(argv[1]));
	karen.complain("WARNING", std::string(argv[1]));
	karen.complain("ERROR", std::string(argv[1]));
	karen.complain("ERROR", std::string(argv[1]));

	karen.complain("ACDC", std::string(argv[1]));
	karen.complain("LENIN", std::string(argv[1]));
	
	karen.complain("ERROR", std::string(argv[1]));
}