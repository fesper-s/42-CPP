/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:03:19 by fesper-s          #+#    #+#             */
/*   Updated: 2023/06/12 17:09:52 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &src) {
	*this = src;
}

RPN::~RPN() {}

RPN RPN::operator=(const RPN &rhs) {
	this->_stack = rhs._stack;
	return *this;
}

static bool isValidExpression(const std::string &exp) {
	if (!isdigit(exp[0]) || !isdigit(exp[2]))
		return false;
	for (unsigned int i = 0; i < exp.length(); i++) {
		if (!(isdigit(exp[i]) || exp[i] == '+' || exp[i] == '-' || \
			exp[i] == '/' || exp[i] == '*' || exp[i] == ' '))
			return false;
		if (i % 2 != 0 && exp[i] != ' ')
		 return false;
	}
	return true;
}

void RPN::execute(const std::string &exp) {
	if (!isValidExpression(exp)) {
		std::cerr << "Error" << std::endl;
		return;
	}
	
}
