/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:00:40 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/08 22:41:19 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &rhs) {
	(void) rhs;
	return *this;
}

AForm *Intern::makeForm(const std::string &formName, const std::string &formTarget) {
	AForm *forms[] = {
		new ShrubberyCreationForm(formTarget),
		new RobotomyRequestForm(formTarget),
		new PresidentialPardonForm(formTarget)
	};

	std::string formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	for (int i = 0; i < 3; i++) {
		if (formName == formNames[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return forms[i];
		}
		else
			delete forms[i];
	}
	std::cout << "Intern cannot create " << formName << std::endl;
	return NULL;
}
