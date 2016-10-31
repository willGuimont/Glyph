#ifndef SOURCECODE_H
#define SOURCECODE_H


#include <string.h>
#include <iostream>
#include <fstream>
#include <exception>

class SourceCode {
public:
	SourceCode();
	virtual ~SourceCode();
	std::string read(std::string filepath);
	void write(std::string out, std::string code);
};

#endif // SOURCECODE_H
