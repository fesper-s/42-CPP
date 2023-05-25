#include "Span.hpp"

Span::Span() {
	this->N = 0;
}

Span::Span(const Span &src) {
	*this = src;
}

Span::Span(unsigned int N) {
	this->N = N;
}

Span::~Span() {}

Span &Span::operator=(const Span &rhs) {
	this->N = rhs.N;
	this->_numbers = rhs._numbers;
	return *this;
}

void Span::addNumber(int nbr) {
	if (this->_numbers.size() >= this->N)
		throw std::runtime_error("Exception: Span is full");

	this->_numbers.push_back(nbr);
}

int Span::shortestSpan() {
	if (this->N <= 1 || this->_numbers.size() <= 1)
		throw std::runtime_error("Exception: Span has not enough numbers to compare");

	int shortest = std::numeric_limits<int>::max();
    for (unsigned int i = 0; i < this->_numbers.size(); i++) {
        for (unsigned int j = 0; j < this->_numbers.size(); j++) {
            if (j == i)
                j++;
            if (j == this->_numbers.size())
                break;
            if (this->_numbers[i] >= this->_numbers[j] && this->_numbers[i] - this->_numbers[j] < shortest)
				shortest = this->_numbers[i] - this->_numbers[j];
            else if (this->_numbers[j] >= this->_numbers[i] && this->_numbers[j] - this->_numbers[i] < shortest)
				shortest = this->_numbers[j] - this->_numbers[i];
        }
	}
    return shortest;
}

int Span::longestSpan() {
	if (this->N <= 1 || this->_numbers.size() <= 1)
		throw std::runtime_error("Exception: Span has not enough numbers to compare");

	std::vector<int> buffer(this->_numbers);
	sort(buffer.begin(), buffer.end());
	return buffer[buffer.size() - 1] - buffer[0];
}
