/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:02:10 by fesper-s          #+#    #+#             */
/*   Updated: 2023/06/16 16:37:35 by fesper-s         ###   ########.fr       */
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
		this->_vector.push_back(buffer);
	}
	return true;
}

void PmergeMe::execute(char **nbrs) {
	if (!validateArg(nbrs)) {
		std::cerr << "Error" << std::endl;
		return;
	}
}
