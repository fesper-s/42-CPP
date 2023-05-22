#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <map>
# include <vector>

template<typename T>
typename T::iterator easyfind(T &intContainer, int nbr) {
	typename T::iterator it = find(intContainer.begin(), intContainer.end(), nbr);
	if (it == intContainer.end())
		throw std::runtime_error("Exception: No occurrence found");
	return it;
}

#endif
