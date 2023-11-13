#pragma once
#include <vector>
#include <stack>
#include <map>
#include <deque>
#include <iostream>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
public:
	MutantStack() : std::stack<T, container>() {}
	MutantStack(MutantStack<T, container> const &other) : std::stack<T, container>(other) {}
	MutantStack<T, container> &operator=(MutantStack<T, container> const &other)
	{
		if (this != &other)
			std::stack<T, container>::operator=(other);
		return *this;
	}
	virtual ~MutantStack() {}

	typedef typename container::iterator iterator;
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }

	typedef typename container::const_iterator const_iterator;
	const_iterator begin() const { return this->c.begin(); }
	const_iterator end() const { return this->c.end(); }
};
