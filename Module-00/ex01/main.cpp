/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:04:31 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/17 14:36:20 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void empty_input(std::string *input, std::string request) {
	while (input->empty()) {
		std::cout << "Error: empty input: Try again" << std::endl;
		std::cout << request;
		getline(std::cin, *input);
	}
}

void add_contact(PhoneBook *phonebook) {
	Contact	contact;
	std::string input;

	std::cout << "Fist Name: ";
	getline(std::cin, input);
	if (input.empty())
		empty_input(&input, "First Name: ");
	std::cout << input << std::endl;
	contact.setFirstName(input);

	std::cout << "Last Name: ";
	getline(std::cin, input);
	if (input.empty())
		empty_input(&input, "Last Name: ");
	contact.setLastName(input);

	std::cout << "Nickname: ";
	getline(std::cin, input);
	if (input.empty())
		empty_input(&input, "Nickname: ");
	contact.setNickname(input);

	std::cout << "Phone Number: ";
	getline(std::cin, input);
	if (input.empty())
		empty_input(&input, "Phone Number: ");
	contact.setPhoneNumber(input);

	std::cout << "Darkest Secret: ";
	getline(std::cin, input);
	if (input.empty())
		empty_input(&input, "Darkest Secret: ");
	contact.setDarkestSecret(input);

	phonebook->newContact(contact);
}

int	main() {
	PhoneBook phonebook;
	std::string input;

	while (true) {
		std::cout << "Enter command: ";
		getline(std::cin, input);
		if (input == "ADD")
			add_contact(&phonebook);
		if (input == "SEARCH")
			continue;
		if (input == "EXIT")
			break;
	}
	return 0;
}
