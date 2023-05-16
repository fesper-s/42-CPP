#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
	public:
		~ScalarConverter();

		ScalarConverter &operator=(const ScalarConverter &rhs);

		static void convert(const std::string &literal);
};

#endif
