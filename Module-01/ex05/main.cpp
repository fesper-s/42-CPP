/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:32:08 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/22 18:02:48 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl harl;

	std::cout << "harl.complain(\"DEBUG\") :" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "harl.complain(\"INFO\") :" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "harl.complain(\"WARNING\") :" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "harl.complain(\"ERROR\") :" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	return 0;
}