# C++ Module 08 - Templated Containers, Iterators, Algorithms

## Exercise 00: Easy find

### Files to Turn In:
- Makefile
- main.cpp
- easyfind.{h, hpp}
- (Optional) easyfind.tpp

### Forbidden Functions:
None

A simple exercise to get started on the right foot. Write a function template `easyfind` that accepts a type `T`. It takes two parameters. The first one has type `T`, and the second one is an integer. Assuming `T` is a container of integers, this function has to find the first occurrence of the second parameter in the first parameter.

If no occurrence is found, you can either throw an exception or return an error value of your choice. If you need inspiration, analyze how standard containers behave. Implement and turn in your own tests to ensure everything works as expected. Note that you don't have to handle associative containers.

## Exercise 01: Span

### Files to Turn In:
- Makefile
- main.cpp
- Span.{h, hpp}
- Span.cpp

### Forbidden Functions:
None

Develop a `Span` class that can store a maximum of N integers, where N is an unsigned int variable passed to the constructor. The class should have a member function called `addNumber()` to add a single number to the `Span`. Any attempt to add a new element when there are already N elements stored should throw an exception.

Implement two member functions: `shortestSpan()` and `longestSpan()`, which find the shortest or longest span (distance) between all the numbers stored and return it. If there are no numbers stored or only one, an exception should be thrown.

Write thorough tests for your `Span` class, testing it with at least a minimum of 10,000 numbers.

**Example:**
```cpp
int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
// Output:
// 2
// 14
```
## Exercise 02: Mutated Abomination

**Files to Turn In:**
- Makefile
- main.cpp
- MutantStack.{h, hpp}
- (Optional) MutantStack.tpp

**Forbidden Functions:** None

Develop a `MutantStack` class that makes the `std::stack` container iterable. Write this class in terms of `std::stack` and provide iterators as an additional feature.

Write and turn in your own tests to ensure everything works as expected.

**Example:**
```cpp
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}
```
// The output should be the same when using MutantStack or another container like std::list.
