#include <iostream>
#include "SourceCode.h"
#include "Interpreter.h"
#include "Compiler.h"

using namespace std;

int main(int argc, char* argv[]) {
    try
    {
        if (argc == 2)
        {
            // run file
            SourceCode sourceCode = SourceCode();
            Interpreter interpreter = Interpreter();

            string sourceFile = argv[1];
            string code = sourceCode.read(sourceFile);

            interpreter.run(code);
        }
        else if (argc == 4)
        {
            // compile file
            if (strcmp(argv[1], "-c"))
            {
                throw -1;
            }
            Compiler compiler = Compiler();
            SourceCode sourceCode = SourceCode();

            string sourceFile = argv[3];
            string code = sourceCode.read(sourceFile);
            string out = argv[2];

            compiler.compile(code, out);
        }
        else
            throw -1;
    }
    catch (...)
	{
		cout << "Usage: glyph -[mode] [out] source_file\n";
		cout << "\t-c: compile (glyph -c out source_file)\n";
	}
	return 0;
}
