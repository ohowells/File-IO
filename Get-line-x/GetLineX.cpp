#include <fstream>
#include <iostream>
#include <string>
#include <stdexcept>

#define LINE_X 2

std::string GetLineX(std::ifstream &infile, std::string line)
{
	for (auto i = 0; i < LINE_X; i++)
		std::getline(infile, line);
	
	return line;
}

void PrintResult(const std::string& str) 
{
	std::cout << "Line " << LINE_X << " of file contains:\n"
		<< str << std::endl;
}

int main(void)
{
	try
	{	
		std::string line;
		std::ifstream infile("data_base.txt");

		if (!infile) throw std::runtime_error("\nCouldn't open file\n");

		PrintResult(GetLineX(infile, line));

	}
	catch (const std::runtime_error& err)
	{
		std::cout << err.what();
		return 1;
	}
	return 0;
}