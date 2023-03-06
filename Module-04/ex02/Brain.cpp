/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:39:47 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/06 09:46:28 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain: default constructor called" << std::endl;
}

Brain::Brain(Brain const &brain) {
	std::cout << "Brain: copy constructor called" << std::endl;
	*this = brain;
}

Brain::~Brain(void) {
	std::cout << "Brain: destructor called" << std::endl;	
}

Brain &Brain::operator=(Brain const &brain) {
	std::cout << "Brain: copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}
