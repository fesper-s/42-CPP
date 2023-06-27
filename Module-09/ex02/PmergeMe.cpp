/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:02:10 by fesper-s          #+#    #+#             */
/*   Updated: 2023/06/20 18:22:16 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &src) {
	*this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe PmergeMe::operator=(const PmergeMe &rhs) {
	this->_list = rhs._list;
	this->_vector = rhs._vector;
	return *this;	
}

bool PmergeMe::validateArg(char **nbrs) {
	for (int i = 1; nbrs[i]; i++) {
		for (int j = 0; nbrs[i][j]; j++) {
			if (!isdigit(nbrs[i][j]))
				return false;
		}
		int buffer = atoi(nbrs[i]);
		this->_list.push_back(buffer);
	}
	return true;
}

void PmergeMe::mergeSort() {
	size_t listSize = this->_list.size();
	if (listSize <= 1)
		return;
	int i = 0;
	for (std::list<int>::iterator lit; lit != this->_list.end(); ++lit) {
		if (i < this->_list.size() / 2)
			
		i++;
	}
}

void PmergeMe::execute(char **nbrs) {
	if (!validateArg(nbrs)) {
		std::cerr << "Error" << std::endl;
		return;
	}

	std::cout << "---vector content---" << std::endl;
	for (std::vector<int>::iterator vit = this->_vector.begin(); vit != this->_vector.end(); ++vit)
		std::cout << *vit << std::endl;
	std::cout << std::endl << "---list content---" << std::endl;
	for (std::list<int>::iterator lit = this->_list.begin(); lit != this->_list.end(); ++lit)
		std::cout << *lit << std::endl;
}
