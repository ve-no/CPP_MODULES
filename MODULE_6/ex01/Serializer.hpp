#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data {
  int a;
  double b;
  float c;
  std::string s1;
};

class Serializer
{
private:
	std::string _input;
	Serializer(std::string input);
	Serializer();
public:
	Serializer(const Serializer &copy);
	~Serializer();
	Serializer &operator=(const Serializer &copy);

	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};

#endif
