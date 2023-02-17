/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:09:28 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/17 13:13:21 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::newContact(Contact contact) {
	this->_contact[this->_index] = contact;
	if (this->_index < 7)
		this->_index++;
}

int	 PhoneBook::getIndex() {
	return this->_index;
}
