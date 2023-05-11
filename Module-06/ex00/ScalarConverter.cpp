#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
	*this = src;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
	(void) rhs;
	return *this;
}

static int checkPseudoLiterals(const std::string &literal) {
	if (literal == "nan" || literal == "-inf" || literal == "+inf" || literal == "nanf" || literal == "-inff" || literal == "+inff") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (literal == "nan" || literal == "-inf" || literal == "+inf") {
			std::cout << "float: " << literal << "f" << std::endl;
			std::cout << "double: " << literal << std::endl;
		}
		else if (literal == "nanf" || literal == "-inff" || literal == "+inff") {
			std::cout << "float: " << literal << std::endl;
			std::cout << "double: " << literal.substr(0, literal.length() - 1) << std::endl;
		}
		return 1;
	}
	return 0;
}

void ScalarConverter::convert(const std::string &literal) {
	std::string typeChar = "";
	int typeInt = 0;
	//float typeFloat = 0.0f;
	//double typeDouble = 0.0;

	if (literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0])) {
		typeChar = literal[0];
		std::cout << "char: " << typeChar << std::endl;
		std::cout << "int: " << static_cast<int>(typeChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(typeChar[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(typeChar[0]) << ".0" << std::endl;
		return;
	}

	if (checkPseudoLiterals(literal))
		return;
	
	typeInt = stoi(literal);
}
