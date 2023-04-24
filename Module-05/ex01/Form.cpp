/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:52:06 by fesper-s          #+#    #+#             */
/*   Updated: 2023/04/24 12:56:45 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Generic Form"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {
	return;
}

Form::Form(const Form &form) : _name(form._name), _isSigned(form._isSigned), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {
	return;
}

Form::~Form(void) {
	return;
}

const std::string Form::getName(void) {
	return this->_name;
}

bool Form::getIsSigned(void) {
	return this->_isSigned;
}

const int Form::getGradeToSign(void) {
	return this->_gradeToSign;
}

const int Form::getGradeToExecute(void) {
	return this->_gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	this->_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Error: Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Error: Grade is too low";
}
