#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T>
class Array {
	private:
		T *_array;
		unsigned int _len;
	public:
		Array() {
			this->_array = new T[0];
			this->_len = 0;
		}

		Array(unsigned int n) {
			this->_array = new T[n];
			this->_len = n;
		}

		Array(const Array &src) {
			this->_array = new T[src.size()];
			this->_len = src.size();
			for (unsigned int i = 0; i < src.size(); i++)
				this->_array[i] = src._array[i];
		}

		~Array() {
			delete [] this->_array;
		}

		Array &operator=(const Array &rhs) {
			if (this == &rhs)
			this->_array = new T[rhs.size()];
			this->_len = rhs.size();
			for (unsigned int i = 0; i < rhs.size(); i++)
				this->_array[i] = rhs._array[i];
			return *this;
		}

		T &operator[](unsigned int index) {
			if (index >= this->size())
				throw std::out_of_range("Error: Out of range index");
			return this->_array[index];
		}

		unsigned int size() const {
			return this->_len;
		}
};

#endif
