/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:32:48 by fesper-s          #+#    #+#             */
/*   Updated: 2023/04/24 09:28:07 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	std::cout << "----- Constructors -----" << std::endl;
	//Animal *animal = new Animal();
	Animal *dog = new Dog();
	Animal *cat = new Cat();

	std::cout << std::endl << "----- Methods -----" << std::endl;
	//animal->makeSoud();
	dog->makeSound();
	cat->makeSound();
	
	std::cout << std::endl << "----- Destructors -----" << std::endl;
	delete dog;
	delete cat;

	return 0;
}
