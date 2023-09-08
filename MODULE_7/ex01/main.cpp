#include "iter.hpp"

void print_element(int n) {
	std::cout << n * 2 << std::endl;
}

void print_char(char c) {
	std::cout << (char)toupper(c) << std::endl;
}

int main() {
	int array[] = {1, 2, 3, 4, 5};
	char arr[6] = {'a', '.', 'c', 'd', 'e'};
	int n = sizeof(array) / sizeof(array[0]);

	iter(array, n, print_element);
	std::cout << array[4]<< std::endl;
	iter(arr, n, print_char);

  return 0;
}
