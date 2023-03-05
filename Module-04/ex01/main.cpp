/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:21:04 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 18:13:24 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	std::cout << "----- Constructors -----" << std::endl;
	Animal *animal[10];
	for (int i = 0; i < 10; i++) {
		if (i < 5)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}
	
	std::cout << "----- Class Methods -----" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << animal[i]->getType() << std::endl; 

	std::cout << "----- Destructors -----" << std::endl;
	for (int i = 0; i < 10; i++)
		delete animal[i];

	return 0;
}
