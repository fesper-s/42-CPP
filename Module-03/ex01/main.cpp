/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:35:39 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/01 14:55:58 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::cout << std::endl << "----- TESTE ClapTrap -----" << std::endl;	
	
    ClapTrap clapTrap("Leonardo");
    
	clapTrap.attack("Rafael");
	clapTrap.takeDamage(9);
	clapTrap.beRepaired(1);
	clapTrap.takeDamage(1);
	clapTrap.takeDamage(1);
	clapTrap.takeDamage(1);

	std::cout << std::endl << "----- TESTE ScavTrap -----" << std::endl;	
	
    ScavTrap scavTrap("Donatello");

	scavTrap.attack("Michelangelo");
	scavTrap.takeDamage(99);
	scavTrap.beRepaired(1);
	scavTrap.takeDamage(1);
	scavTrap.guardGate();
	scavTrap.takeDamage(1);
	scavTrap.takeDamage(1);

	std::cout << std::endl;

	return 0;
}
