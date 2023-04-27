/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:59:34 by fesper-s          #+#    #+#             */
/*   Updated: 2023/04/27 14:16:19 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Form::Form(void) : _name("Generic Form"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {
	return;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExec) {
	if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooHighException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooLowException();
	return;
}

Form::Form(const Form &form) : _name(form._name), _isSigned(form._isSigned), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {
	return;
}

Form::~Form(void) {
	return;
}

Form &Form::operator=(const Form &form) {
	(void) form;
	std::cout << "Operator '=' is not available since the form private members are constant" << std::endl;
	return *this;
}

std::string Form::getName(void) const {
	return this->_name;
}

bool Form::getIsSigned(void) const {
	return this->_isSigned;
}

int Form::getGradeToSign(void) const {
	return this->_gradeToSign;
}

int Form::getGradeToExecute(void) const {
	return this->_gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Error: Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Error: Grade is too low";
}

const char *Form::FormNotSignedException::what() const throw() {
	return "Error: Form is not signed";
}

std::ostream &operator<<(std::ostream &o, const Form &form) {
	o << form.getName() << ", form sign is " << std::boolalpha << form.getIsSigned() << ", grade to sign is " << form.getGradeToSign() << ", grade to execute is " << form.getGradeToExecute();
	return o;
}
