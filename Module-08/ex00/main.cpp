#include "easyfind.hpp"

int main() {
	try {
		std::cout << "----- List -----" << std::endl;
		std::list<int> lst;
		lst.push_back(1);
		lst.push_back(17);
		lst.push_back(42);
		std::list<int>::iterator it;
		for (it = ::easyfind(lst, 17); it != lst.end(); ++it)
			std::cout << *it << std::endl;

		std::cout << std::endl << "----- Vector -----" << std::endl;
		std::vector<int> vec;
		vec.push_back(53);
		vec.push_back(53);
		vec.push_back(61);
		vec.push_back(16);
		std::vector<int>::iterator itv;
		for (itv = ::easyfind(vec, 61); itv != vec.end(); ++itv)
			std::cout << *itv << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
