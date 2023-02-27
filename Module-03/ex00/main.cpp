/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:35:39 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/27 14:19:56 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap("Leonardo");
	ClapTrap clapTrap2(clapTrap);
	ClapTrap clapTrap3 = clapTrap;

	clapTrap.attack("Rafael");
	clapTrap.takeDamage(42);
	clapTrap.beRepaired(256);

	clapTrap2.attack("Donatello");
	clapTrap2.takeDamage(1);
	clapTrap2.beRepaired(2);

	clapTrap3.attack("Michelangelo");
	clapTrap3.takeDamage(3);
	clapTrap3.beRepaired(4);

	return 0;
}
