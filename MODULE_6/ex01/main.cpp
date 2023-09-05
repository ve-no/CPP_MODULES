#include "Serializer.hpp"

int main() {
	Data data = {1, 3.14, 2.5, "hello world"};

	uintptr_t raw = Serializer::serialize(&data);

	Data* ptr = Serializer::deserialize(raw);

	if (ptr == &data) {
		std::cout << "The serializer works as expected! s1: " << ptr->s1 << std::endl;
	} else {
		std::cout << "The serializer does not work as expected!" << std::endl;
	}
	return 0;
}
