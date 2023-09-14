#include <vector>
#include <algorithm>
#include <iterator>

class Span {
private:
    std::vector<int> numbers;

public:
    // Constructor to initialize the Span with a maximum size.
    Span(int size) {
        numbers.reserve(size);
    }

    // Function to add a single number to the Span.
    void addNumber(int num) {
        if (numbers.size() < numbers.capacity()) {
            numbers.push_back(num);
        }
    }

    // Function to add a range of numbers using iterators.
    template <typename InputIterator>
    void addRange(InputIterator begin, InputIterator end) {
        // Calculate the number of elements to add.
        size_t numToAdd = std::distance(begin, end);

        // Ensure that adding these elements won't exceed the capacity.
        if (numbers.size() + numToAdd <= numbers.capacity()) {
            // Use std::copy to add elements from the range to the vector.
            std::copy(begin, end, std::back_inserter(numbers));
        }
        // You may want to handle an error condition if the capacity is exceeded.
    }
};

int main() {
    Span span(10); // Create a Span with a maximum capacity of 10.

    std::vector<int> numbersToAdd = {1, 2, 3, 4, 5};

    // Add a range of numbers to the Span.
    span.addRange(numbersToAdd.begin(), numbersToAdd.end());

    // Add a single number to the Span.
    span.addNumber(6);

    return 0;
}
