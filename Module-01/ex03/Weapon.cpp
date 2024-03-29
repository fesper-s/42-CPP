/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:02:09 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/20 19:18:48 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	return;
}

std::string const &Weapon::getType() {
	return this->_type;
}

void Weapon::setType(std::string type) {
	this->_type = type;
}
