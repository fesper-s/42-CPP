#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate() {
	int randClass = rand() % 3;
	if (randClass == 0)
		return new A();
	else if (randClass == 1)
		return new B();
	return new C();
}

void identify(Base *p) {
	if (dynamic_cast<const A *>(p) != nullptr) {
		std::cout << "type of pointer is A" << std::endl;
		return;
	}
	else if (dynamic_cast<const B *>(p) != nullptr) {
		std::cout << "type of pointer is B" << std::endl;
		return;
	}
	if (dynamic_cast<const C *>(p) != nullptr) {
		std::cout << "type of pointer is C" << std::endl;
		return;
	}
}

void identify(Base &p) {
	if (dynamic_cast<const A *>(&p) != nullptr) {
		std::cout << "type of ref is A" << std::endl;
		return;
	}
	else if (dynamic_cast<const B *>(&p) != nullptr) {
		std::cout << "type of ref is B" << std::endl;
		return;
	}
	if (dynamic_cast<const C *>(&p) != nullptr) {
		std::cout << "type of ref is C" << std::endl;
		return;
	}
}

int main() {
	std::srand(std::time(0));

	Base *ptr = generate();
	identify(ptr);
	delete ptr;

	Base *ptr2 = generate();
	Base &ref = *ptr2;
	identify(ref);
	delete ptr2;

	return 0;
}
