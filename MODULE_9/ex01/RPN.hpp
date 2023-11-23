#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>

class RPN
{
    public:
        RPN();
        RPN(RPN const &other);
        RPN &operator=(RPN const &other);
        ~RPN();
        /**
         * Calculates the result of the given RPN expression.
         *
         * @param line The RPN expression to be calculated.
         */
        void calcule(std::string line);

    private:
        std::stack<float> _stack;
};