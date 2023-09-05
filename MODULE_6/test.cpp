#include <iostream>
#include <cstdlib>  // for random number generation
#include <ctime>    // for seeding the random number generator

class Base {
public:
    virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate() {
    int randomValue = std::rand() % 3; // Generate a random number between 0 and 2

    switch (randomValue) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != nullptr) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p) != nullptr) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p) != nullptr) {
        std::cout << "C" << std::endl;
    }
}

void identify(Base& p) {
    identify(&p); // Call the pointer version of identify
}
