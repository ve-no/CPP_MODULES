#include "MutantStack.hpp"

int main () {
	MutantStack <int, std::vector<int> > mstack;
	mstack.push(95);
	mstack.push(7);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(13);
	mstack.push(50);
	mstack.push(3);
	mstack.push(88);
	mstack.push(42);

	MutantStack <int, std::vector<int> >::iterator it = mstack.begin();
	MutantStack <int, std::vector<int> >::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int, std::vector<int> > s(mstack);

	std::cout << "---------------------" << std::endl;

	MutantStack <int> mstack3;
	mstack3.push(0);
	mstack3.push(7);
	std::cout << mstack3.top() << std::endl;
	mstack3.pop();
	std::cout << mstack3.size() << std::endl;
	mstack3.push(3);
	mstack3.push(5);
	mstack3.push(737);
	mstack3.push(0);
	mstack3.push(42);

	MutantStack <int>::iterator it3 = mstack3.begin();
	MutantStack <int>::iterator ite3 = mstack3.end();

	++it3;
	--it3;
	while (it3 != ite3) {
		std::cout << *it3 << std::endl;
		++it3;
	}
	std::stack<int> s3(mstack3);

	return 0;
}