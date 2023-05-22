#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() {}
		MutantStack(const MutantStack &src) {
			*this = src;
		}
		~MutantStack() {}

		MutantStack &operator=(const MutantStack &rhs) {
			(void) rhs;
			return *this;
		}
};

#endif
