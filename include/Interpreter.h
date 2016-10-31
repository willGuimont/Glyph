#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <string>
#include <iostream>
#include <stack>

#define MEMORY_LENGTH 256

class Interpreter
{
    public:
        Interpreter();
        virtual ~Interpreter();
        void run(std::string code);
        void reset();
    private:
        int pc;
        int mc;
        char mem[MEMORY_LENGTH];
        std::stack<int> addressStack;
        std::stack<int> compareStack;
};

#endif // INTERPRETER_H
