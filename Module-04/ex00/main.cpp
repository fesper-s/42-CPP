/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:21:04 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 09:52:07 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
	std::cout << "----- Constructors -----" << std::endl;
	const Animal *meta = new Animal();
	const Animal *i = new Cat();
	const Animal *j = new Dog();
	std::cout << std::endl;

	std::cout << "----- Class methods -----" << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;

	std::cout << "----- Constructors -----" << std::endl;
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongI = new WrongCat();
	std::cout << std::endl;

	std::cout << "----- Class methods -----" << std::endl;
	std::cout << wrongMeta->getType() << std::endl;
	std::cout << wrongI->getType() << std::endl;
	wrongMeta->makeSound();
	wrongI->makeSound();
	std::cout << std::endl;

	std::cout << "----- Destructors -----" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongI;

	return 0;
}
