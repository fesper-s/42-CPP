/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:37:11 by fesper-s          #+#    #+#             */
/*   Updated: 2023/06/01 19:00:26 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}
	BitcoinExchange btc;
	btc.exchange(argv[1]);
	return 0;	
}
