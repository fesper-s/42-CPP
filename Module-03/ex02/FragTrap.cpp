/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 03:15:22 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/01 15:16:52 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "defaultName";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap name constructor called" << std::endl;	
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &fragTrap) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &fragTrap) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->_name = fragTrap._name;
	this->_hitPoints = fragTrap._hitPoints;
	this->_energyPoints = fragTrap._energyPoints;
	this->_attackDamage = fragTrap._attackDamage;
	return *this;	
}

void FragTrap::attack(const std::string& target) {
	if (!this->_hitPoints) {
		std::cout << this->_name << " is dead already!" << std::endl;
		return;
	}
	else if (!this->_energyPoints) {
		std::cout << this->_name << "'s energy points are empty!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;

	this->_energyPoints--;
}

void FragTrap::highFivesGuy(void) {
	std::cout << "FragTrap " << this->_name << " is asking for a high five!" << std::endl;	
}
