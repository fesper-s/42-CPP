#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template<typename T>
void swap(T &a, T &b) {
	T buffer = a;
	a = b;
	b = buffer;
}

template<typename T>
T min(const T &a, const T &b) {
	if (b <= a)
		return b;
	return a;
}

template<typename T>
T max(const T &a, const T &b) {
	if (b >= a)
		return b;
	return a;
}

#endif
