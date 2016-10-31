#include "Interpreter.h"

Interpreter::Interpreter()
{
    reset();
}

Interpreter::~Interpreter()
{
    //dtor
}

void Interpreter::run(std::string code)
{
    int codeLength = code.length();
    while (pc < codeLength)
    {
        char glyph = code[pc];
        switch (glyph)
        {
            case '+':
                // Add one to the current memory case
                mem[mc] += 1;
                break;
            case '-':
                // Substract one to the current memory case
                mem[mc] -= 1;
                break;
            case '.':
                // Print the content of the memory case as a char
                std::cout << mem[mc];
                break;
            case '[':
                // Loop while memory case is not 0
                addressStack.push(pc);
                break;
            case ']':
                // End loop
                if (addressStack.size() != 0)
                {
                    if (mem[mc] != 0)
                        pc = addressStack.top();
                    else
                        addressStack.pop();
                }
                break;
            case '~':
                // Load the next char in code into the current memory case
                pc += 1;
                mem[mc] = code[pc];
                break;
            case '<':
                // Go back one memory case
                mc -= 1;
                if (mc < 0)
                    mc = MEMORY_LENGTH - 1;
                break;
            case '>':
                // Go to the next memory case
                mc += 1;
                if (mc >= MEMORY_LENGTH)
                    mc = 0;
                break;
            case '=':
                // Go to the memory case number of the next char
                pc += 1;
                mc = code[pc];
                break;
            case '?':
                // Load an input to memory case
                std::cin >> mem[mc];
                break;
            case '\'':
                // Same as '?', to be BrainFuck compatible
                std::cin >> mem[mc];
                break;
            case '*':
                //
                break;
            case '/':
                //
                break;
            case '#':
                //
                break;
            case '{':
                //
                break;
            case '}':
                //
                break;
            default:
                break;
        }
        pc += 1;
    }
    std::cout << std::endl;
}

void Interpreter::reset()
{
    pc = 0;
    mc = 0;
    for (int i = 0; i < MEMORY_LENGTH; i++)
    {
        mem[i] = 0;
    }
    addressStack = std::stack<int>();
    compareStack = std::stack<int>();
}
