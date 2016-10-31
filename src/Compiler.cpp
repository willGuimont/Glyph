#include "Compiler.h"

Compiler::Compiler()
{
    //ctor
}

Compiler::~Compiler()
{
    //dtor
}

void Compiler::compile(std::string code, std::string filename)
{
    std::ofstream file((filename + ".cpp").c_str());
    file << "#include <iostream>\n#include \"Interpreter.h\"\nusing namespace std;\n";
    file << "int main(){\n\tInterpreter interpreter = Interpreter();\n\tstring code = \"";
    file << code << "\";\n\tinterpreter.run(code);\n\treturn 0;\n}";
    file.close();

    // TODO UPDATE SYSTEM CALL TO FIT INSTALL FOLDER
    system("copy data\\Interpreter.h Interpreter.h");
    system("copy data\\Interpreter.cpp Interpreter.cpp");

    std::string compileLine = "g++ -o " + filename + " *.cpp";
    system(compileLine.c_str());
    std::string rmLine = "del Interpreter.h Interpreter.cpp " + filename + ".cpp";
    system(rmLine.c_str());
}
