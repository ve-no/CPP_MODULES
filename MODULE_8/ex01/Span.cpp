#include "Span.hpp"
#include <climits>


Span::Span(unsigned int N) {
	nums.reserve(N);
}

Span::Span(const Span &copy)
{
	*this = copy;
}

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
	long short_span = INT_MAX;
	if (vec.size() < 2)
		throw std::runtime_error("there is less then 2 element in the container");
	std::sort(vec.begin(), vec.end());
	for (int i = 1; i < (int)vec.size(); i++) {
		if ((static_cast <long> (vec.at(i)) - vec.at(i - 1)) < short_span)
			short_span = static_cast <long> (vec.at(i)) - vec.at(i - 1);
	}
	return short_span;
}

long Span::longestSpan() const
{
	std::vector<int> vec = nums;
	if (vec.size() < 2)
		throw std::runtime_error("there is less then 2 element in the container");
	std::sort(vec.begin(), vec.end());
	return static_cast <long> (vec.back()) - vec.front();
}

