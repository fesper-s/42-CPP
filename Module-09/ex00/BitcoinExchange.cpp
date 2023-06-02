/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:39:23 by fesper-s          #+#    #+#             */
/*   Updated: 2023/06/01 20:21:12 by fesper-s         ###   ########.fr       */
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

	if (!dataFile.is_open()) {
		std::cerr << "Error: 'data.csv' file is missing." << std::endl;
		exit(EXIT_FAILURE);
	}
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

static bool isLeapYear(const int &year) {
	if (year % 4 != 0)
        return false;
    else if (year % 100 != 0)
        return true;
    else if (year % 400 != 0)
        return false;
    else
        return true;
}

static void valiDate(const std::string &date) {
	std::regex dateFormat("^\\d{4}-\\d{2}-\\d{2}$");

	if (date != "date | val" && !std::regex_match(date, dateFormat)) {
		std::cerr << "Error: invalid date format => " << date << std::endl;
		return;
	}
	if (date != "date | val" ) {
		std::string yearStr = date.substr(0, 4);
		int year = atoi(yearStr.c_str());
		if (year < 2009) {
			std::cerr << "Error: invalid year => " << year << std::endl;
			return;
		}
		std::string monthStr = date.substr(5, 2);
		int month = atoi(monthStr.c_str());
		if (month < 1 || month > 12) {
			std::cerr << "Error invalid month => " << month << std::endl;
			return;
		}
		std::string dayStr = date.substr(8,2);
		int day = atoi(dayStr.c_str());
		if (day >= 1 && day <= 31) {
			if (year == 2009 && month == 1 && day < 3) {
				std::cerr << "Error: bitcoin doesn't exist on date => " << date << std::endl; 
				return;
			}
			if (day > 28 && month == 2) {
				if (day == 29 && !isLeapYear(year)) {
					std::cerr << "Error: " << year << " is not leap year." << std::endl;
					return;
				}
				else if (day > 29) {
					std::cerr << "Error: february cannot have more than 29 days." << std::endl;
					return;
				}
			}
			if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11)) {
				std::cerr << "Error: month => " << month << " doesn't have 31 days." << std::endl;
				return;
			}
		}
		else {
			std::cerr << "Error invalid day => " << day << std::endl; 
		}
	}
}

static void validateInputFile(const std::string &fileName) {
	std::ifstream inputFile(fileName);

	if (!inputFile.is_open()) {
		std::cerr << "Error: file " << fileName << " doesn't exist." << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string line;
	while (getline(inputFile, line)) {
		valiDate(line.substr(0,10));
	}
	inputFile.close();
}

void BitcoinExchange::exchange(const std::string &fileName) {
	setDataBase();
	validateInputFile(fileName);
}
