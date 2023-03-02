/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:38:05 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/02 09:40:58 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->type = "Dog";
}

Dog::Dog(Dog const &dog) {
	*this = dog;	
}

Dog::~Dog(void) {
	return;
}

Dog &Dog::operator=(Dog const &dog) {
	this->type = dog.type;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "* woof woof *" << std::endl;
}
