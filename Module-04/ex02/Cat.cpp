/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:44:26 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/06 10:07:40 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->_brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat: default constructor called" << std::endl;
}

Cat::Cat(Cat const &cat) {
	*this = cat;
	std::cout << "Cat: copy constructor called" << std::endl;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << "Cat: destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &cat) {
	this->type = cat.type;
	this->_brain = cat._brain;
	std::cout << "Cat: copy assignment operator called" << std::endl;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "* meow meow *" << std::endl;
}
