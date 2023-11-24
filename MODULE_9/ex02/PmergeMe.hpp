#pragma once
#include <iostream>
#include <deque>
#include <list>
#include <cstdlib>
#include <ctime>

class PmergeMe {
public:
    PmergeMe(int ac, char **av);

    template <typename T>
    void display(const T& container);
    
    template <typename T>
    void mergeSort(T& arr);
};