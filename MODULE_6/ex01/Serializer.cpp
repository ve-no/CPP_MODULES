#include "Serializer.hpp"

Serializer::Serializer() : _input("") {}

Serializer::Serializer(std::string input) : _input(input) {}

Serializer::Serializer(const Serializer &copy) {*this = copy;}

Serializer::~Serializer() {}


Serializer &Serializer::operator=(const Serializer &copy){
	if(this != &copy)
		this->_input = copy._input;
	return (*this);
}

   uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
  }

   Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
  }


