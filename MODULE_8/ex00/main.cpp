#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "easyfind.hpp"

int main() {
	
	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);

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
