#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char **av) {
    std::deque<int> inputDeque;
    std::list<int> inputList;

    if (ac < 2) {
        std::cerr << "Error: At least one input value is required." << std::endl;
        exit(1);
    }
    for (int i = 1; i < ac; ++i) {
        int value = atoi(av[i]);
        if (value < 0) {
            std::cerr << "Error: Invalid input value \"" << av[i] << "\". Only positive integers are allowed." << std::endl;
            exit(1);
        }
        inputDeque.push_back(value);
        inputList.push_back(value);
    }
    std::cout << "Before: ";
    display(inputDeque);

    clock_t start1 = clock();
    mergeSort(inputDeque);
    clock_t end1 = clock();
    double time1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC * 1000;

    clock_t start2 = clock();
    mergeSort(inputList);
    clock_t end2 = clock();
    double time2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC * 1000;

    std::cout << " After: ";
    display(inputDeque);
    std::cout << "Time to process a range of " << inputDeque.size() << " elements with std::deque container: " << time1 << " us" << std::endl;
    std::cout << "Time to process a range of " << inputList.size() << " elements with std::list container: " << time2 << " us" << std::endl;
    if (inputDeque == std::deque<int>(inputList.begin(), inputList.end()))
        std::cout << "The sorted sequences are equal." << std::endl;
    else
        std::cout << "The sorted sequences are not equal." << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& other) { *this = other;}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this == &other)
        return *this;
    return *this;
}

PmergeMe::~PmergeMe() { }


template <typename T>
void PmergeMe::display(const T& container) {
    typename T::const_iterator it;
    for (it = container.begin(); it != container.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

template <typename T>

void PmergeMe::mergeSort(T& arr) {
    typename T::iterator it, tempIt;
    for (it = ++arr.begin(); it != arr.end(); ++it) {
        int temp = *it;
        tempIt = it;
        while (tempIt != arr.begin() && *(--tempIt) > temp) {
            *it = *tempIt;
            it = tempIt;
        }
        *it = temp;
    }
}
