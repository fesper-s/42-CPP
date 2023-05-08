/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 08:16:02 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/01 13:01:17 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("home") {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src.getTarget()) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (this->getGradeToExecute() < executor.getGrade())
		throw AForm::GradeTooLowException();

	std::ofstream ofs(this->getTarget() + "_shrubbery");
	ofs << "              v .   ._, |_  .," << std::endl;
	ofs << "           `-._\\/  .  \\ /    |/_" << std::endl;
	ofs << "               \\  _\\, y | \\//" << std::endl;
	ofs << "         _\\_.___\\, \\/ -.\\||" << std::endl;
	ofs << "           `7-,--.`._||  / / ," << std::endl;
	ofs << "           /'     `-. `./ / |/_.'" << std::endl;
	ofs << "                     |    |//" << std::endl;
	ofs << "                     |_    /" << std::endl;
	ofs << "                     |-   |" << std::endl;
	ofs << "                     |   =|" << std::endl;
	ofs << "                     |    |" << std::endl;
	ofs << "--------------------/ ,  . \\--------._" << std::endl;
	ofs.close();
	std::cout << this->getTarget() << "_shrubbery was created successfully!" << std::endl;
}
