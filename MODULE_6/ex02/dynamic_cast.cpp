#include "dynamic_cast.hpp"

Base *generate() {
	std::srand(static_cast<unsigned>(std::time(NULL)));
	int randomValue = std::rand() % 3;

	switch (randomValue) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return NULL;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p) {
	try {
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {}
	try {
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;

	}
	catch (std::exception &e) {}
	try {
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;

	}
	catch (std::exception &e) {}
	}


