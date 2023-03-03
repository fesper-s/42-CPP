/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:19:49 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 09:45:19 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal") {
	std::cout << "WrongAnimal: default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal) {
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal: destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &wrongAnimal) {
	std::cout << "WrongAnimal: copy assignment operator called" << std::endl;
	this->type = wrongAnimal.type;
	return *this;
}

std::string WrongAnimal::getType(void) const {
	return this->type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "* wrong sound of silence *" << std::endl;	
}
