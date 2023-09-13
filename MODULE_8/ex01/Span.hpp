#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>


class Span {
private:
	std::vector<int> nums;
	unsigned int n;
public:
	Span(unsigned int N);

	void addNumber(int num);

	int shortestSpan();

	int longestSpan();

	void addNumbers(const std::vector<int>& nums);
};
