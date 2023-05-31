/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:37:11 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/31 13:29:18 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	try {
		if (argc != 2)
			throw std::runtime_error("Error: Wrong number of arguments");
		BitcoinExchange btc;
		btc.exchange(argv[1]);	
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;	
}
