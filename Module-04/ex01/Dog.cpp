/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:38:05 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 16:38:59 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog: default constructor called" << std::endl;
	this->_brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(Dog const &dog) {
	std::cout << "Dog: copy constructor called" << std::endl;
	*this = dog;	
}

Dog::~Dog(void) {
	std::cout << "Dog: destructor called" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(Dog const &dog) {
	std::cout << "Dog: copy assignment operator called" << std::endl;
	this->type = dog.type;
	this->_brain = dog._brain;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "* woof woof *" << std::endl;
}
