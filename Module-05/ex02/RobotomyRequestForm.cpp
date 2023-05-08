/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:10:13 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/05 09:48:59 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("home") {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src.getTarget()) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (this->getGradeToExecute() < executor.getGrade())
		throw AForm::GradeTooLowException();
	
	std::cout << "VRRRRRRRRRRR" << std::endl;
	if ((rand() % 10) % 2 == 0)
		std::cout << this->_target << " has been robotomized successfully!" << std::endl;	
	else
		std::cout << "Robotomy on " << this->_target << " failed" << std::endl;
}
 