#include "Span.hpp"

int main() {
	try {
		std::cout << "----- Test from subject -----" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << std::endl << "----- Testing 10000 numbers ------" << std::endl;
		Span sp2 = Span(10000);
		for (int i = 0; i != 10000; i++)
			sp2.addNumber(i);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}