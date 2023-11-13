#include "Span.hpp"
#include <climits>


Span::Span(unsigned int N) { nums.reserve(N); }

Span::Span(const Span &copy) { *this = copy; }

Span &Span::operator=(const Span &copy)
{
	if (this != &copy) {
		this->nums = copy.nums;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (nums.size() < nums.capacity())
		nums.push_back(num);
	else
		throw std::runtime_error("the vector is full");
}

long Span::shortestSpan() const
{
	std::vector<int> vec = nums;
	if (vec.size() < 2)
		throw std::runtime_error("there is less then 2 element in the container");
	std::sort(vec.begin(), vec.end());
	long dis = (long)vec.at(1) - vec.at(0);
	for (size_t i = 2; i < vec.size(); i++) {
		if ((long)(vec.at(i)) - vec.at(i - 1) < dis)
			dis = (long)(vec.at(i)) - vec.at(i - 1);
	}
	return (dis);
}

long Span::longestSpan() const
{
	std::vector<int> vec = nums;
	if (vec.size() < 2)
		throw std::runtime_error("there is less then 2 element in the container");
	std::sort(vec.begin(), vec.end());
	return static_cast <long> (vec.back()) - vec.front();
}

