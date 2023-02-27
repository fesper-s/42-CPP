/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:09:28 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/27 08:25:44 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _index(0), _count(0) {
	return;
}

void PhoneBook::newContact(Contact contact) {
	if (this->_count == 8)
		this->_count = 0;
	this->_contact[this->_count] = contact;
	this->_count++;
	if (this->_index == 8)
		this->_index = 7;
	this->_index++;
}

Contact PhoneBook::getContact(int i) {
	return this->_contact[i];
}

int	 PhoneBook::getIndex() {
	return this->_index;
}
