#pragma once

# include <iostream>
# include <vector>
# include <algorithm>
# include <stdexcept>

template <typename T>
int easyfind( T container, int find) {
	if (std::find(container.begin(), container.end(), find) == container.end())
		throw std::runtime_error("Value not found in the container.");

	return 1;
}
