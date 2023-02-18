/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:04:31 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/17 21:21:07 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

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

std::string truncate(std::string str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void print_phonebook(PhoneBook *phonebook) {
	Contact contact;

	for (int i = 0; i != 45; i++)
		std::cout << '-';
	std::cout << std::endl;
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i != 45; i++)
		std::cout << '-';
	std::cout << std::endl;
	for (int i = 0; i < phonebook->getIndex(); i++) {
		std::cout << '|';
		contact = phonebook->getContact(i);	
		std::cout << std::setw(10) << i << '|';
		std::cout << std::setw(10) << truncate(contact.getFirstName()) << '|';
		std::cout << std::setw(10) << truncate(contact.getLastName()) << '|';
		std::cout << std::setw(10) << truncate(contact.getNickname()) << '|' << std::endl;
	}
	for (int i = 0; i != 45; i++)
		std::cout << '-';
	std::cout << std::endl;
}

void search_contact(PhoneBook *phonebook) {
	Contact contact;
	int index;

	print_phonebook(phonebook);
	std::cout << "Insert contact index: ";
	std::cin >> index;
	if (index < phonebook->getIndex()) {
		contact = phonebook->getContact(index);
		std::cout << "First Name:     " << contact.getFirstName() << std::endl;
		std::cout << "Last Name:      " << contact.getLastName() << std::endl;
		std::cout << "Nickname:       " << contact.getNickname() << std::endl;
		std::cout << "Phone Number:   " << contact.getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
	}
	else
		std::cout << "This index is out of range" << std::endl;
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
			search_contact(&phonebook);
		if (input == "EXIT")
			break;
	}
	return 0;
}
