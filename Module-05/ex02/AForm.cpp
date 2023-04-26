/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:59:34 by fesper-s          #+#    #+#             */
/*   Updated: 2023/04/26 12:48:30 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("Generic AForm"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {
	return;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExec) {
	if (gradeToSign > 150 || gradeToExec > 150)
		throw AForm::GradeTooHighException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw AForm::GradeTooLowException();
	return;
}

AForm::AForm(const AForm &form) : _name(form._name), _isSigned(form._isSigned), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {
	return;
}

AForm::~AForm(void) {
	return;
}

AForm &AForm::operator=(const AForm &form) {
	(void) form;
	std::cout << "Operator '=' is not available since the form private members are constant" << std::endl;
	return *this;
}

std::string AForm::getName(void) const {
	return this->_name;
}

bool AForm::getIsSigned(void) const {
	return this->_isSigned;
}

int AForm::getGradeToSign(void) const {
	return this->_gradeToSign;
}

int AForm::getGradeToExecute(void) const {
	return this->_gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "Error: Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Error: Grade is too low";
}

std::ostream &operator<<(std::ostream &o, const AForm &form) {
	o << form.getName() << ", form sign is " << std::boolalpha << form.getIsSigned() << ", grade to sign is " << form.getGradeToSign() << ", grade to execute is " << form.getGradeToExecute();
	return o;
}
