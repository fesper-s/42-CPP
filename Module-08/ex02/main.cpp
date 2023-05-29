/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:57:02 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/29 17:33:48 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
	MutantStack<int> mstack;

	std::cout << "----- First test -----" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top of MutantStack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of MutantStack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "New size of MutantStack: "<< mstack.size() << std::endl;

	std::cout << "----- Second test -----" << std::endl;
	MutantStack<std::string> movieStack;
	for (int i = 0; i < 10; i++)
		movieStack.push("movie " + std::to_string(i));
	std::cout << "Size of MovieStack: " << movieStack.size() << std::endl;
	std::cout << "Top of MovieStack: " << movieStack.top() << std::endl;
	movieStack.pop();
	std::cout << "Size after pop top: " << movieStack.size() << std::endl;
	for (MutantStack<std::string>::iterator mit = movieStack.begin(); mit != movieStack.end(); mit++)
		std::cout << *mit << std::endl;
	return 0;
}
