#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <exception>

template <typename T>

class Array {
public:
	Array() : _n(0), array(new T[_n]){}

	Array(unsigned int n) : _n(n), array(new T[_n]){
		for(unsigned int i = 0; i < n; i++)
			array[i] = T();
	}

	Array(const Array& copy): _n(copy._n), array(new T[_n]) {
		for(unsigned int i = 0; i < _n; i++)
			array[i] = copy.array[i];
	}

	~Array () {
		delete [] array;
	}

	Array &operator=(const Array &copy) {
		if (this != &copy)
		{
			delete [] array;
			_n = copy.n;
			array = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				array[i] = copy.array[i];
		}
		return *this;
	}

	T &operator[](unsigned int i) {
		if (i >= _n)
			throw std::exception();
		return array[i];
	}

	T const& operator[](unsigned int i) const{
		if (i >= _n)
			throw std::exception();
		return array[i];
	}

	unsigned int size() const{ return _n; }
private:
	unsigned int _n;
	T* array;
};

#endif
