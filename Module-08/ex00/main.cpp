/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:56:36 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/26 12:56:37 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	try {
		std::cout << "----- List -----" << std::endl;
		std::list<int> lst;
		lst.push_back(1);
		lst.push_back(17);
		lst.push_back(42);
		for (std::list<int>::iterator it = ::easyfind(lst, 17); it != lst.end(); it++)
			std::cout << *it << std::endl;

		std::cout << std::endl << "----- Vector -----" << std::endl;
		std::vector<int> vec;
		vec.push_back(53);
		vec.push_back(53);
		vec.push_back(61);
		vec.push_back(16);
		for (std::vector<int>::iterator itv = ::easyfind(vec, 61); itv != vec.end(); itv++)
			std::cout << *itv << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
