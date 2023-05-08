/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:52:06 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/01 16:26:58 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Generic Form"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(const std::string &name, int gradeToSign, int gradeToExec) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExec) {
	if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooHighException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) {}

Form::~Form() {}

Form &Form::operator=(const Form &rhs) {
	this->_signed = rhs.getSigned();
	return *this;
}

const std::string Form::getName() const {
	return this->_name;
}

bool Form::getSigned() const {
	return this->_signed;
}

int Form::getGradeToSign() const {
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const {
	return this->_gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Error: Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Error: Grade is too low";
}

std::ostream &operator<<(std::ostream &o, const Form &rhs) {
	o << rhs.getName() << ", form sign is " << std::boolalpha << rhs.getSigned() << ", grade to sign is " << rhs.getGradeToSign() << ", grade to execute is " << rhs.getGradeToExecute();
	return o;
}
