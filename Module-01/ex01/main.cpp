/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:00:01 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/18 21:15:52 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie *horde = zombieHorde(42, "Zed");
	for (int i = 0; i < 42; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}
