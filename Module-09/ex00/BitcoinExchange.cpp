/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:39:23 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/31 13:32:44 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {
	*this = src;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange BitcoinExchange::operator=(const BitcoinExchange &rhs) {
	this->setMap(rhs.getMap());
	return *this;
}

std::map<std::string, int> BitcoinExchange::getMap() const {
	return this->_map;
}

void BitcoinExchange::setMap(const std::map<std::string, int> &map) {
	this->_map = map;
}

void BitcoinExchange::exchange(const std::string &fileName) {
	std::ifstream file(fileName);
	if (!file.is_open())
		throw std::runtime_error("Error: File doesn't exist");
	std::string line;
	while (getline(file, line)) {
		
	}
	file.close();
}
