/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:38:05 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/06 10:08:12 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->_brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog: default constructor called" << std::endl;
}

Dog::Dog(Dog const &dog) {
	*this = dog;
	std::cout << "Dog: copy constructor called" << std::endl;
}

Dog::~Dog(void) {
	delete this->_brain;
	std::cout << "Dog: destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &dog) {
	this->type = dog.type;
	this->_brain = dog._brain;
	std::cout << "Dog: copy assignment operator called" << std::endl;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "* woof woof *" << std::endl;
}
