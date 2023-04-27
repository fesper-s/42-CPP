/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:03:19 by fesper-s          #+#    #+#             */
/*   Updated: 2023/04/27 09:27:55 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
	Bureaucrat Joe("Joe", 150);
	AForm *test = new ShrubberyCreationForm();
	try {
		Joe.signForm(*test);
		test->execute(Joe);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	delete test;

	return 0;
}