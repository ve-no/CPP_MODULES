#include "Span.hpp"


Span::Span(unsigned int N): n(N) {}

void Span::addNumber(int num)
{
	if (n == nums.size())
		throw std::runtime_error("the vector is full");
	nums.push_back(num);
}

int Span::shortestSpan()
{
	return 0;
}

int Span::longestSpan()
{
	std::sort(nums.begin(), nums.end());
	return nums.end() - nums.begin();
}

void Span::addNumbers(const std::vector<int> &nums)
{
}
