#include <string>
#include <iostream>
#include <fstream> 
#include <sstream>

std::string	makeLine(std::string line, std::string find, std::string replace)
{
	std::stringstream	result;
	int j = 0;

	for (int i = 0; i < line.length(); i++)
	{
		for(j = 0; j < find.length() && find[j] == line[i + j]; j++)
			;
		if (j == find.length())
		{
			result << replace;
			i += j - 1;
		}
		else
			result << line[i];
	}
	return (result.str());
}

int	replace(std::ifstream &file, std::string infile, std::string find, std::string replace)
{
	std::string		name(infile + std::string(".res"));
	std::ofstream	outfile(name.data(), std::ios::trunc);
	std::string		line;

	if (!outfile.is_open())
	{
		std::cout << "Can't create file" << std::endl;
		file.close();
		return (1);
	}
	while (std::getline(file, line))
	{
		outfile << makeLine(line, find, replace);
		if (!file.eof())
			outfile << '\n';
	}
	file.close();
	outfile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream	file;

	if (argc != 4 || std::string(argv[2]).length() == 0 || std::string(argv[3]).length() == 0)
	{
		std::cout << "Bad args" << std::endl;
		return (1);
	}
	file.open(argv[1]);
	if (!file.is_open())
	{
		std::cout << "No such file or directory" << std::endl;
		return (1);
	}
	return (replace(file, argv[1], argv[2], argv[3]));
}