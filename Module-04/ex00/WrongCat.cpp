/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:23:56 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 09:28:55 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	this->type = "WrongCat";
	return;
}

WrongCat::WrongCat(WrongCat const &wrongCat) {
	*this = wrongCat;
}

WrongCat::~WrongCat(void) {
	return;
}

WrongCat &WrongCat::operator=(WrongCat const &wrongCat) {
	this->type = wrongCat.type;
	return *this;
}

void WrongCat::makeSound(void) const {
	std::cout << "* wrong meow wrong meow *" << std::endl;
}
