#include "dynamic_cast.hpp"

int main() {

	Base *object = generate();

	std::cout << "Using pointer:" << std::endl;
	identify(object);

	std::cout << "Using reference:" << std::endl;
	identify(*object);

	delete object;

	return 0;
}
