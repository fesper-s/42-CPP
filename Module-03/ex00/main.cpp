/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:35:39 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/01 15:05:35 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap leonardo("Leonardo");
	ClapTrap rafael(leonardo);
	ClapTrap donatello;
	donatello = leonardo;

	std::cout << std::endl << "----- TESTE NAME CONSTRUCTOR -----" << std::endl;	
	
	for (int i = 0; i < 9; i++)
		leonardo.attack("Rafael");
	leonardo.takeDamage(9);
	leonardo.beRepaired(1);
	leonardo.takeDamage(1);
	leonardo.beRepaired(1);
	leonardo.takeDamage(1);
	leonardo.takeDamage(1);

	std::cout << std::endl << "----- TESTE COPY CONSTRUCTOR -----" << std::endl;	
	
	for (int i = 0; i < 9; i++)
		rafael.attack("Donatello");
	rafael.takeDamage(9);
	rafael.beRepaired(1);
	rafael.takeDamage(1);
	rafael.beRepaired(1);
	rafael.takeDamage(1);
	rafael.takeDamage(1);

	std::cout << std::endl << "----- TESTE DEFAULT CONSTRUCTOR + COPY OPERATOR -----" << std::endl;

	for (int i = 0; i < 9; i++)
		donatello.attack("Michelangelo");
	donatello.takeDamage(9);
	donatello.beRepaired(1);
	donatello.takeDamage(1);
	donatello.beRepaired(1);
	donatello.takeDamage(1);
	donatello.takeDamage(1);
	std::cout << std::endl;
	
	return 0;
}
