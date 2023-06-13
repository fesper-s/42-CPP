/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:03:19 by fesper-s          #+#    #+#             */
/*   Updated: 2023/06/13 17:15:36 by fesper-s         ###   ########.fr       */
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
	for (unsigned int i = 0; i < exp.length(); i++) {
		if (i % 2 == 0) {
			if (isdigit(exp[i]))
				this->_stack.push(exp[i] - 48);
			else {
				int buffer = this->_stack.top();
				this->_stack.pop();
				if (exp[i] == '+')
					buffer += this->_stack.top();
				else if (exp[i] == '-')
					buffer -= this->_stack.top();
				else if (exp[i] == '/')
					buffer /= this->_stack.top();
				else
					buffer *= this->_stack.top();
				this->_stack.pop();
				this->_stack.push(buffer);
			}
		}
	}
	std::cout << this->_stack.top() << std::endl;
}
