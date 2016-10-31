#ifndef COMPILER_H
#define COMPILER_H

#include <string>
#include <fstream>
#include <stdlib.h>

class Compiler
{
    public:
        Compiler();
        virtual ~Compiler();
        void compile(std::string code, std::string file);
};

#endif // COMPILER_H
