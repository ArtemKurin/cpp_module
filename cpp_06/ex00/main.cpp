#include "Convert.hpp"

int main (int argc, char **argv)
{
	Convert conver;
	if (argc == 2)
		conver.convert(argv[argc-1]);
}