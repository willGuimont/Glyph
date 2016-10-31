#include "SourceCode.h"

SourceCode::SourceCode() {
	// TODO Auto-generated constructor stub

}

SourceCode::~SourceCode() {
	// TODO Auto-generated destructor stub
}

std::string SourceCode::read(std::string filepath)
{
	std::ifstream file(filepath.c_str());
	try
	{
		std::string line;
		std::string code;
		if (file.is_open())
		{
			while ( file >> line )
			{
				code.append(line);
			}
			file.close();
			return code;
		}
		else
		{
			throw 1;
		}
	}
	catch (int &e) {
		std::cerr << "Error reading file\nReturning empty string\n";
		return "";
	}
}

void SourceCode::write(std::string out, std::string code)
{
	std::ofstream file(out.c_str());
	try
	{
		if (file.is_open())
		{
			file << code;
			file.close();
		}
		else
		{
			throw 1;
		}
	}
	catch (int &e) {
		std::cerr << "Error writing file\nReturning empty string\n";
	}
}
