#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
	private:
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);

		Array &operator=(const Array &rhs);

		
};

#endif
