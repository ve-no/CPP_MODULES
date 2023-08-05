#include <iostream>

int main () {
    int a = 5;
    int& ref = a;

    ref += 5;
    // ref will be a copy of a if modify the ref, a will be changed
    std::cout << a << std::endl;
}
