#include "iter.hpp"

void printStr(const std::string &str) {
	std::cout << str << std::endl;
}

void isABigNumber(const int &nbr) {
	if (nbr >= 9000)
		std::cout << "IT'S OVER 9000!!" << std::endl;
	else if (nbr >= 1000)
		std::cout << "Man that's a big number" << std::endl;
	else if (nbr < 1000)
		std::cout << "Sorry, small number" << std::endl;
}

int main() {
	std::string strArray[] = {
		"Banana",
		"Morango",
		"Uva"
	};
	::iter(strArray, 3, printStr);

	int intArray[] = {9000, 1042, 42};
	::iter(intArray, 3, isABigNumber);

	return 0;
}
