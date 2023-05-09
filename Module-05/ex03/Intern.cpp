/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:00:40 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/09 08:24:49 by fesper-s         ###   ########.fr       */
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

static AForm *makeShrubbery(const std::string &target) {
	return new ShrubberyCreationForm(target);
}

static AForm *makeRobotomy(const std::string &target) {
	return new RobotomyRequestForm(target);
}

static AForm *makePresidential(const std::string &target) {
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &formTarget) {
	AForm *(*forms[3]) (const std::string &target) = {
		&makeShrubbery,
		&makeRobotomy,
		&makePresidential
	};

	std::string formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	for (int i = 0; i < 3; i++) {
		if (formName == formNames[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return forms[i](formTarget);
		}
	}
	std::cout << "Intern cannot create " << formName << std::endl;
	return NULL;
}
