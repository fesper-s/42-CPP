/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:44:26 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 16:37:25 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat: default constructor called" << std::endl;
	this->_brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(Cat const &cat) {
	std::cout << "Cat: copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat(void) {
	std::cout << "Cat: destructor called" << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(Cat const &cat) {
	std::cout << "Cat: copy assignment operator called" << std::endl;
	this->type = cat.type;
	this->_brain = cat._brain;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "* meow meow *" << std::endl;
}
