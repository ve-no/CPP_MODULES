# include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &other) : _stack(other._stack) {}

RPN &RPN::operator=(RPN const &other)
{
    if (this != &other)
        _stack = other._stack;
    return *this;
}

RPN::~RPN() {}

void RPN::calcule(std::string line)
{
    char token;

    for (size_t i = 0; i < line.length(); i++) {
        token = line[i];
        if (token == ' ')
            continue;
        if (isdigit(token)) { 
            _stack.push(token - '0');
        } else if ((token == '+' || token == '-' || token == '*' || token == '/') && _stack.size() >= 2){
            float num1 = _stack.top();
            _stack.pop();
            float num2 = _stack.top();
            _stack.pop();
            switch (token) {
                case '+':
                    _stack.push(num2 + num1);
                    break;
                case '-':
                    _stack.push(num2 - num1);
                    break;
                case '*':
                    _stack.push(num2 * num1);
                    break;
                case '/':
                    _stack.push(num2 / num1);
                    break;
            }
        }
        else {
            std::cout << "Error" << std::endl;
            return;
        }
    }
    if (_stack.size() == 1)
        std::cout << _stack.top() << std::endl;
    else
        std::cout << "Error" << std::endl;
}