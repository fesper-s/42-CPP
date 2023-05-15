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

static bool checkPseudoLiterals(const std::string &literal) {
	std::string pseudoLiteral[6] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};

	for (int i = 0; i < 6; i++) {
		if (literal == pseudoLiteral[i])
			return true;
	}
	return false;
}

void ScalarConverter::convert(const std::string &literal) {
	std::string typeChar = "";
	int typeInt = 0;
	float typeFloat = 0.0f;
	double typeDouble = 0.0;

	if (literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0])) {
		typeChar = literal[0];
		std::cout << "char: " << typeChar << std::endl;
		std::cout << "int: " << static_cast<int>(typeChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(typeChar[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(typeChar[0]) << ".0" << std::endl;
		return;
	}

	typeInt = atoi(literal.c_str());

	if (literal[literal.length() - 1] == 'f') {
		typeFloat = stof(literal);
		typeDouble = static_cast<double>(typeFloat);
	}
	else {
		typeDouble = stof(literal);
		typeFloat = static_cast<float>(typeDouble);
	}

	if (checkPseudoLiterals(literal))
		typeChar = "impossible";

	if (typeChar.empty() && !isprint(typeInt))
    	typeChar = "Non displayable";

	if (typeChar.empty() && isprint(typeInt)) {
		typeChar = "'";
		typeChar += static_cast<char>(typeInt);
		typeChar += "'";
	}

	std::cout << "char: " << typeChar << std::endl;

	if (typeChar == "impossible")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << typeInt << std::endl;

	if (typeChar == "impossible" && typeFloat == 0) {
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}

	if (typeChar != "impossible" && typeFloat - static_cast<int>(typeFloat) == 0) {
		std::cout << "float: " << typeFloat << ".0f" << std::endl;
		std::cout << "double: " << typeDouble << ".0" << std::endl;
		return;
	}

	std::cout << "float: " << typeFloat << "f" << std::endl;
	std::cout << "double: " << typeDouble << std::endl;
}
