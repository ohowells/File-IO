#ifndef _FILE_IO_
#define _FILE_IO_

#include <fstream>
#include <sstream>
#include <string>
#include <vector>

namespace fio
{
	template<typename T = int>
	using Vector_1D = std::vector<T>;

	template<typename T = int>
	using Vector_2D = std::vector<std::vector<T>>;

	class FileIO
	{
	public:
		void ReadFileIn(std::ifstream& infile, Vector_2D<>& data)
		{
			while(std::getline(infile, t_data))
			{
				std::istringstream t_stream(t_data);
				Vector_1D<> t_store;

				// Takes in the string stream and removes the commas,
				// the pushs each value to a vector
				while(std::getline(t_stream, ss_data, ','))
					t_store.push_back(atoi(ss_data.c_str()));

				// Contents of the 1D vector then pushed to a 2D vector
				data.push_back(t_store);
			}
		}
	private:
		std::string t_data, ss_data;
	};
}
#endif
