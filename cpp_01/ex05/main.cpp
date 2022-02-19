#include "Karen.hpp"

int main(void)
{
	Karen karen;

	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	karen.complain("WARNING");
	karen.complain("WARNING");
	karen.complain("ERROR");
	karen.complain("ERROR");

	karen.complain("ACDC");
	karen.complain("LENIN");
	
	karen.complain("ERROR");
}