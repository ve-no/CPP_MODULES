#include "Fixed.hpp"

int main() {
    Fixed a(0);
    Fixed b(a);
    // Fixed const d(b);
    Fixed c = b;

    c = c;
    std::cout << "++b " << ++a << std::endl;
    std::cout << "b++ " << a++ << std::endl;
    // std::cout << "b + a " << (b + a) << std::endl;
    // std::cout << "b / a " << (b / a) << std::endl;
    // std::cout << "a * b" << (a * b) << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}
