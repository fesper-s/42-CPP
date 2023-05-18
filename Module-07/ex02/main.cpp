#include "Array.hpp"

int main() {
	std::srand(std::time(0));

	try {
		Array<std::string> fruits(3);
		fruits[0] = "banana";
		fruits[1] = "apple";
		fruits[2] = "watermelon";
		for (int i = 0; i < 3; i++)
			std::cout << fruits[i] << std::endl;
		Array<std::string> fruitBasket(fruits);
		for (int i = 0; i < 3; i++)
			std::cout << "Fruits from basket: " << fruitBasket[i] << std::endl;

		Array<int> numbers(3);
		for (int i = 0; i < 3; i++) {
			numbers[i] = rand() % 100;
			std::cout << numbers[i] << std::endl;
		}
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
