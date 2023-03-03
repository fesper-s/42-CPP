/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:38:05 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 09:45:08 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog: default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &dog) {
	std::cout << "Dog: copy constructor called" << std::endl;
	*this = dog;	
}

Dog::~Dog(void) {
	std::cout << "Dog: destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &dog) {
	std::cout << "Dog: copy assignment operator called" << std::endl;
	this->type = dog.type;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "* woof woof *" << std::endl;
}
