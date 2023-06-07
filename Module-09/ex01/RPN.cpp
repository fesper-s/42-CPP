/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:03:19 by fesper-s          #+#    #+#             */
/*   Updated: 2023/06/06 14:28:42 by fesper-s         ###   ########.fr       */
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

void RPN::polishNotation(const std::string &exp) {
	
}
