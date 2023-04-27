/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 08:16:02 by fesper-s          #+#    #+#             */
/*   Updated: 2023/04/27 09:27:02 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("home") {
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src._target) {
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	(void) rhs;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (this->getIsSigned() == false)
		throw AForm::FormNotSignedException();
	else if (this->getGradeToExecute() < executor.getGrade())
		throw AForm::GradeTooLowException();

	std::ofstream ofs(this->getName() + "_shrubbery");
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
	std::cout << this->getName() << "_shrubbery was created successfully!" << std::endl;
}
