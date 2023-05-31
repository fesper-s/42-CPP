/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:39:23 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/31 17:32:37 by fesper-s         ###   ########.fr       */
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

std::map<std::string, float> BitcoinExchange::getMap() const {
	return this->_map;
}

void BitcoinExchange::setMap(const std::map<std::string, float> &map) {
	this->_map = map;
}

void BitcoinExchange::setDataBase() {
	std::ifstream dataFile("data.csv");
	if (!dataFile.is_open())
		throw std::runtime_error("Error: 'data.csv' file is missing");
	std::string line;
	getline(dataFile, line);
	while (getline(dataFile, line)) {
		std::string date = line.substr(0, 10);
		std::string strValue = line.substr(11);
		float value = atof(strValue.c_str());
		this->_map.insert(std::make_pair(date, value));
	}
	dataFile.close();	
}

static void validateInputFile(const std::string &fileName) {
	std::ifstream inputFile(fileName);
	if (!inputFile.is_open())
		throw std::runtime_error("Error: Input file doesn't exist");
	
	inputFile.close();
}

void BitcoinExchange::exchange(const std::string &fileName) {
	setDataBase();
	for (std::map<std::string, float>::iterator it = this->_map.begin(); it != this->_map.end(); it++)
		std::cout << it->first << " and " << it->second << std::endl;
	validateInputFile(fileName);
}
