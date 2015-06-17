#include <iostream>
#include "FileIO.h"
#include "exception.h"

void PrintResults(const fio::Vector_2D<>& results)
{
	for (const fio::Vector_1D<>& v : results)
		for (int i : v)
			std::cout << i << " \n";
}

int main(void)
{
	fio::FileIO file_manager;
	fio::Vector_2D<> data_set;

	try
	{
		std::ifstream infile("data_base.txt");

		if (!infile)
			throw MyException("\nCould not open file.\n\n");

		file_manager.ReadFileIn(infile, data_set);
	}
	catch (const MyException& err)
	{
		std::cout << err.what();
		return 1;
	}

	std::cout << "Reading file that contains Delimiter-separated values.\n";
	PrintResults(data_set);
	return 0;
}
