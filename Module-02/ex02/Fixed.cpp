/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:34:18 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/26 11:44:58 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "utils.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixedPointValue(0) {
	return;
}

Fixed::Fixed(Fixed const &fixed) {
	*this = fixed;
}

Fixed::Fixed(int const fixedPointValue) {
	this->_fixedPointValue = fixedPointValue * power(2, this->_fractionalBits);
}

Fixed::Fixed(float const fixedPointValue) {
	this->_fixedPointValue = roundf(fixedPointValue * power(2, this->_fractionalBits));
}

Fixed::~Fixed(void) {
	return;
}

Fixed &Fixed::operator=(Fixed const &fixed) {
	this->_fixedPointValue = fixed._fixedPointValue;
	return *this;
}

bool Fixed::operator>(Fixed const &fixed) {
	return this->_fixedPointValue > fixed._fixedPointValue;
}

bool Fixed::operator<(Fixed const &fixed) {
	return this->_fixedPointValue < fixed._fixedPointValue;
}

bool Fixed::operator>=(Fixed const &fixed) {
	return this->_fixedPointValue >= fixed._fixedPointValue;
}

bool Fixed::operator<=(Fixed const &fixed) {
	return this->_fixedPointValue <= fixed._fixedPointValue;
}

bool Fixed::operator==(Fixed const &fixed) {
	return this->_fixedPointValue == fixed._fixedPointValue;
}

bool Fixed::operator!=(Fixed const &fixed) {
	return this->_fixedPointValue != fixed._fixedPointValue;
}

Fixed Fixed::operator+(Fixed const &fixed) {
	Fixed buffer;
	buffer.setRawBits(this->_fixedPointValue + fixed.getRawBits());
	return buffer;
}

Fixed Fixed::operator-(Fixed const &fixed) {
	Fixed buffer;
	buffer.setRawBits(this->_fixedPointValue - fixed.getRawBits());
	return buffer;
}

Fixed Fixed::operator*(Fixed const &fixed) {
	Fixed buffer;
	buffer.setRawBits(this->_fixedPointValue * fixed.getRawBits() / power(2, this->_fractionalBits));
	return buffer;
}

Fixed Fixed::operator/(Fixed const &fixed) {
	Fixed buffer;
	buffer.setRawBits(this->_fixedPointValue / fixed.getRawBits() * power(2, this->_fractionalBits));
	return buffer;
}

Fixed Fixed::operator++(int) {
	Fixed buffer(*this);
	this->_fixedPointValue++;
	return buffer;
}

Fixed &Fixed::operator++(void) {
	this->_fixedPointValue++;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed buffer(*this);
	this->_fixedPointValue--;
	return buffer;
}

Fixed &Fixed::operator--(void) {
	this->_fixedPointValue--;
	return *this;
}

int Fixed::getRawBits(void) const {
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
	return float(this->_fixedPointValue) / power(2, this->_fractionalBits);
}

int Fixed::toInt(void) const {
	return this->_fixedPointValue / power(2, this->_fractionalBits);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	if (f1._fixedPointValue < f2._fixedPointValue)
		return f1;
	return f2;
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2) {
	if (f1._fixedPointValue < f2._fixedPointValue)
		return f1;
	return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	if (f1._fixedPointValue > f2._fixedPointValue)
		return f1;
	return f2;
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2) {
	if (f1._fixedPointValue > f2._fixedPointValue)
		return f1;
	return f2;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed) {
	o << fixed.toFloat();
	return o;
}
