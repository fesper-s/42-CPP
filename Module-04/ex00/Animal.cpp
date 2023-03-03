/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:27:32 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 09:27:27 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal") {
	return;
}

Animal::Animal(Animal const &animal) {
	*this = animal;
}

Animal::~Animal(void) {
	return;
}
		
Animal &Animal::operator=(Animal const &animal) {
	this->type = animal.type;
	return *this;
}

std::string Animal::getType(void) const {
	return this->type;
}

void Animal::makeSound(void) const {
	std::cout << "* sound of silence *" << std::endl;
}
