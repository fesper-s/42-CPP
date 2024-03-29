/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:00:12 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/18 21:25:41 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie infected;
	infected.setName("Ellie");
	Zombie *zombie = newZombie("Rick");
	infected.announce();
	zombie->announce();
	randomChump("Carl");
	delete zombie;
	return 0;
}
