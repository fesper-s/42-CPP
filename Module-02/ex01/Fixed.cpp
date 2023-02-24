/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:24:09 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/24 17:33:16 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(int const fixedPointValue) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = fixedPointValue * 256;
}

Fixed::Fixed(float const fixedPointValue) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(fixedPointValue * 256);
}

Fixed &Fixed::operator=(Fixed const &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointValue = fixed._fixedPointValue;
	return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
	return float(this->_fixedPointValue) / 256;
}

int Fixed::toInt(void) const {
	return this->_fixedPointValue / 256;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed) {
	o << fixed.toFloat();
	return o;
}
