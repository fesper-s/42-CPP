/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:03:19 by fesper-s          #+#    #+#             */
/*   Updated: 2023/04/30 18:44:32 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	try {
			Bureaucrat johnDoe;
		Bureaucrat harvey("Harvey Dent", 1);

		std::cout << johnDoe << std::endl;
		std::cout << harvey << std::endl;
		harvey.decrementGrade();
		johnDoe.incrementGrade();
		std::cout << johnDoe << std::endl;
		std::cout << harvey << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
