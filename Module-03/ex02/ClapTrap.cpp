/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:06:37 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/28 03:11:48 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
	this->_name = "defaultName";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clapTrap) {
	std::cout << "Copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clapTrap) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " loses " << amount << " hit points!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " has rapaired " << amount << " hit points!" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
}

void ClapTrap::setName(std::string const &name) {
	this->_name = name;
}
