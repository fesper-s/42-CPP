#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class Span {
	private:
		std::vector<int> _numbers;
		unsigned int N;

	public:
		Span();
		Span(const Span &src);
		Span(unsigned int N);
		~Span();

		Span &operator=(const Span &rhs);

		void addNumber(int nbr);
		int shortestSpan();
		int longestSpan();
};

#endif
