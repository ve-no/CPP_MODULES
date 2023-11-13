#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "easyfind.hpp"

int main() {
	const int arr[] = {1, 2, 3, 4, 5};
	const std::vector<int> numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));

	int target = 32;

	std::list<int> nums;
	nums.push_back(21);
	nums.push_back(22);
	nums.push_back(23);
	nums.push_back(325);
	nums.push_back(44);

	try {
		easyfind(numbers, 2);
		std::cout << "Value found in the container."<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		easyfind(nums, target);
		std::cout << "Value found in the container."<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
