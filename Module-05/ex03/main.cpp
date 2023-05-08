/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:03:19 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/08 10:50:59 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	try {
		Bureaucrat Joe("Joe", 42);
		Bureaucrat President("Lex Luthor", 1);
		//AForm form("genericForm", 50, 50);
		ShrubberyCreationForm test("home");
		RobotomyRequestForm test2("Hank Henshaw");
		PresidentialPardonForm test3("Gorilla Harambe");

		Joe.signForm(test);
		Joe.signForm(test2);
		President.signForm(test3);
		Joe.executeForm(test);
		Joe.executeForm(test2);
		President.executeForm(test3);
		Joe.executeForm(test3);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
