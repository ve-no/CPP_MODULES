#include "Span.hpp"

int main()
{
	const int arr[] = {21, 1, 12, 4, 50};
	const std::vector<int> numbersToAdd(arr, arr + sizeof(arr) / sizeof(arr[0]));
	Span span(10);

	span.addNumber(2147483647);
	span.addNumber(-2147483648);
	span.addNumber(17);
	try{
	span.addRange(numbersToAdd.begin(), numbersToAdd.end());
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try{
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	// span.print();
	return 0;
}
