/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:00:40 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/08 13:35:48 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &rhs) {}

AForm *Intern::makeForm(const std::string &formName, const std::string &formTarget) {
	// void (Harl::*comment_level[4]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	// std::string comment[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	// for (int i = 0; i < 4; i++) {
	// 	if (comment[i] == level)
	// 		return (this->*comment_level[i])();
	// }

	AForm *form[3] = new ShrubberyCreationForm(formTarget), new RobotomyRequestForm(formTarget), new PresidentialPardonForm(formTarget);
	switch (formName) {
		case "shrubbery creation":
			break;
		case "robotomy request":
			break;
		case "presidential pardon":	
			break;
	
		default:
			break;
	}
}
