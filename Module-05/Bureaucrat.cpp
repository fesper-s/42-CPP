/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:07:30 by fesper-s          #+#    #+#             */
/*   Updated: 2023/04/22 17:02:07 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("John Doe"), _grade(150) {
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();

	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) : _name(bureaucrat._name), _grade(bureaucrat._grade) {
	return;
}

Bureaucrat::~Bureaucrat(void) {
	return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat) {
	this->_grade = bureaucrat._grade;

	return *this;
}

std::string const Bureaucrat::getName(void) {
	return this->_name;
}

int Bureaucrat::getGrade(void) {
	return this->_grade;
}
