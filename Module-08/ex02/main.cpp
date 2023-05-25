#include "MutantStack.hpp"

int main() {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "Top of MutantStack: "<<mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of MutantStack: "<<mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "----- The MutantStack -----" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "New size of MutantStack: "<<mstack.size() << std::endl;
	return 0;
}
