/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:23:56 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 09:45:43 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "WrongCat: default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &wrongCat) {
	std::cout << "WrongCat: copy constructor called" << std::endl;
	*this = wrongCat;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat: destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &wrongCat) {
	std::cout << "WrongCat: copy assignment operator called" << std::endl;
	this->type = wrongCat.type;
	return *this;
}

void WrongCat::makeSound(void) const {
	std::cout << "* wrong meow wrong meow *" << std::endl;
}
