/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:03:19 by fesper-s          #+#    #+#             */
/*   Updated: 2023/04/24 09:13:54 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat johnDoe;
	Bureaucrat harvey("Harvey Dent", 1);

	try {
		std::cout << johnDoe << std::endl;
		std::cout << harvey << std::endl;
		johnDoe.incrementGrade();
		harvey.decrementGrade();
		std::cout << johnDoe << std::endl;
		std::cout << harvey << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}