/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:44:26 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/02 09:41:02 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->type = "Cat";
}

Cat::Cat(Cat const &cat) {
	*this = cat;
}

Cat::~Cat(void) {
	return;
}

Cat &Cat::operator=(Cat const &cat) {
	this->type = cat.type;
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "* meow meow *" << std::endl;
}
