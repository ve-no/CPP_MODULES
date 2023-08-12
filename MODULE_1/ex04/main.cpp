#include <iostream>
#include <fstream>

std::string	replaceAll(std::string input, const std::string& s1, const std::string& s2) {
	size_t pos = 0;
	if (s1.empty())
		return (input);
	while ((pos = input.find(s1, pos)) != std::string::npos) {
		input.erase(pos, s1.length());
		input.insert(pos, s2);
		pos += s2.length();
	}
	return (input);
}


int	main(int ac, char **av)
{
	std::string line;
	std::string fileContents;
	std::string modifiedString;
	if (ac == 4)
	{
		std::string file(av[1]);
		std::ifstream inputFile(file);
		if (inputFile.is_open()) {
			while (getline(inputFile, line))
				fileContents += line + "\n";
			inputFile.close();
			modifiedString = replaceAll(fileContents, av[2], av[3]);
		}
		else
			std::cerr << "Error ope  ning the file.\n";
			std::ofstream outputFile(file + ".replace");

		if (outputFile.is_open()) {
			outputFile << modifiedString;

			outputFile.close();
		}
		else
			std::cerr << "Error opening the file.\n";
	}
	return 0;
}
