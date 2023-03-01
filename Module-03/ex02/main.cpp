/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:35:39 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/01 15:21:06 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    std::cout << std::endl << "----- TESTE FragTrap -----" << std::endl;

    FragTrap fragTrap("Rafael");
    fragTrap.attack("Leonardo");
	fragTrap.takeDamage(99);
	fragTrap.beRepaired(1);
	fragTrap.takeDamage(1);
	fragTrap.highFivesGuy();
	fragTrap.takeDamage(1);
	fragTrap.takeDamage(1);

	std::cout << std::endl;

	return 0;
}
