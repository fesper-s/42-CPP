/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:43:52 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/17 13:22:05 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() {
	return this->_first_name;
}

std::string Contact::getLastName() {
	return this->_last_name;
}

std::string Contact::getNickname() {
	return this->_nickname;
}

std::string Contact::getPhoneNumber() {
	return this->_phone_number;
}

std::string Contact::getDarkestSecret() {
	return this->_darkest_secret;
}

void Contact::setFirstName(std::string str) {
	this->_first_name = str;
}

void Contact::setLastName(std::string str) {
	this->_last_name = str;
}

void Contact::setNickname(std::string str) {
	this->_nickname = str;
}

void Contact::setPhoneNumber(std::string str) {
	this->_phone_number = str;
}

void Contact::setDarkestSecret(std::string str) {
	this->_darkest_secret = str;
}
