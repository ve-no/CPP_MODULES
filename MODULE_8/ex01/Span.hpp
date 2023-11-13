#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <climits>

class Span {
private:
	std::vector<int> nums;
public:
	Span(unsigned int N);

	Span(const Span &copy);

	Span &operator=(const Span &copy);

	~Span();

	void addNumber(int num);

	long shortestSpan() const;

	long longestSpan() const;

	template <typename InputIterator>
	void addRange(InputIterator begin, InputIterator end) {
		if (this->nums.size() + std::distance(begin, end) > this->nums.capacity())
			throw std::runtime_error("the vector is fulll");
		std::copy(begin, end, std::back_inserter(nums));
	}
};
