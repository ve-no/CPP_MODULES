#include "Span.hpp"

int main()
{
	const int arr[] = {21, 2, 3, 4, 50};
	const std::vector<int> numbersToAdd(arr, arr + sizeof(arr) / sizeof(arr[0]));
	Span span(20);

	span.addNumber(20);
	span.addNumber(1);
	span.addNumber(17);
	span.addRange(numbersToAdd.begin(), numbersToAdd.end());

	try{
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
