/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:07:30 by fesper-s          #+#    #+#             */
/*   Updated: 2023/04/24 09:08:47 by fesper-s         ###   ########.fr       */
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

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name), _grade(bureaucrat._grade) {
	return;
}

Bureaucrat::~Bureaucrat(void) {
	return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	this->_grade = bureaucrat._grade;

	return *this;
}

const std::string Bureaucrat::getName(void) const {
	return this->_name;
}

int Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void Bureaucrat::incrementGrade(void) {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade(void) {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Error: Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Error: Grade is too low";
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat) {
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}
