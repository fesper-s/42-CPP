/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:03:19 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/08 22:41:30 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	try {
		AForm *form;
		Intern Karl;
		Bureaucrat Major("Major Francis", 1);

		form = Karl.makeForm("presidential pardon", "agent P");
		Major.signForm(*form);
		Major.executeForm(*form);

		delete form;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
