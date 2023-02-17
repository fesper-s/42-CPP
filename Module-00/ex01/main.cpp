/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:04:31 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/16 22:50:52 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void print_contact(PhoneBook *phonebook) {
	for (int i = 0; i < 8; i++) {
		std::cout << "----------------------------" << std::endl;
		std::cout << phonebook->contact[i].index << std::endl;
		std::cout << phonebook->contact[i].first_name << std::endl;
		std::cout << phonebook->contact[i].last_name << std::endl;
		std::cout << phonebook->contact[i].nickname << std::endl;
		std::cout << "----------------------------" << std::endl;
	}
}

void add_contact(PhoneBook *phonebook, int *i) {
	if (*i > 7)
		*i = 7;
	phonebook->contact[*i].index = *i;
	std::cout << "Insert First Name: ";
	std::cin >> phonebook->contact[*i].first_name;
	std::cout << "Insert Last Name: ";
	std::cin >> phonebook->contact[*i].last_name;
	std::cout << "Insert Nickname: ";
	std::cin >> phonebook->contact[*i].nickname;
}

int	main() {
	PhoneBook phonebook;
	std::string input;
	int i = 0;

	while (true) {
		std::cout << "Enter command: ";
		std::cin >> input;
		if (input == "ADD") {
			add_contact(&phonebook, &i);
			i++;
		}
		if (input == "SEARCH")
			print_contact(&phonebook);
		if (input == "EXIT")
			break;
	}
	return 0;
}
