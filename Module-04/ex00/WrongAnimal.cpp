/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:19:49 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 09:27:21 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal") {
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal) {
	*this = wrongAnimal;
}

WrongAnimal::~WrongAnimal(void) {
	return;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &wrongAnimal) {
	this->type = wrongAnimal.type;
	return *this;
}

std::string WrongAnimal::getType(void) const {
	return this->type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "* wrong sound of silence *" << std::endl;	
}
