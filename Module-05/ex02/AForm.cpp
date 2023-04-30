/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:59:34 by fesper-s          #+#    #+#             */
/*   Updated: 2023/04/30 19:11:21 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Generic AForm"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExec) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExec) {
	if (gradeToSign > 150 || gradeToExec > 150)
		throw AForm::GradeTooHighException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &src) : _name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) {
}

AForm::~AForm() {
}

AForm &AForm::operator=(const AForm &rhs) {
	this->_signed = rhs.getSigned();
	return *this;
}

std::string AForm::getName() const {
	return this->_name;
}

bool AForm::getSigned() const {
	return this->_signed;
}

int AForm::getGradeToSign() const {
	return this->_gradeToSign;
}

int AForm::getGradeToExecute() const {
	return this->_gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "Error: Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Error: Grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw() {
	return "Error: AForm is not signed";
}

std::ostream &operator<<(std::ostream &o, const AForm &rhs) {
	o << rhs.getName() << ", form sign is " << std::boolalpha << rhs.getSigned() << ", grade to sign is " << rhs.getGradeToSign() << ", grade to execute is " << rhs.getGradeToExecute();
	return o;
}
