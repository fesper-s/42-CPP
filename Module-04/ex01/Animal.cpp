/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:27:32 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 09:44:42 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal") {
	std::cout << "Animal: default constructor called" << std::endl;
}

Animal::Animal(Animal const &animal) {
	std::cout << "Animal: copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal(void) {
	std::cout << "Animal: destructor called" << std::endl;
}
		
Animal &Animal::operator=(Animal const &animal) {
	std::cout << "Animal: copy assignment operator called" << std::endl;
	this->type = animal.type;
	return *this;
}

std::string Animal::getType(void) const {
	return this->type;
}

void Animal::makeSound(void) const {
	std::cout << "* sound of silence *" << std::endl;
}
