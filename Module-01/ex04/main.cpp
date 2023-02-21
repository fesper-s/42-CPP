/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:20:16 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/21 15:52:47 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int print_error(std::string const &str) {
	std::cout << str << std::endl;
	return 1;
}

std::string replacing(std::string const &buffer, std::string const &s1, std::string const &s2) {
	std::string str = buffer;
	int index = str.find(s1);
	int begin;
	while (index != -1) {
		str.erase(index, s1.length()).insert(index, s2);
		begin = index + s2.length();
		index = str.find(s1, begin);
	}
	return str;
}

int main(int argc, char **argv) {
	if (argc != 4)
		return print_error("Error: invalid amount of parameters");

	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	std::ifstream ifs(filename);
	if (ifs.fail())
		return print_error("Error: file doesn't exist");
	if (!s1.length())
		return print_error("Error: search string can't be empty");

	std::ofstream ofs(filename + ".replace");
	std::string buffer;
	while (getline(ifs, buffer))
		ofs << replacing(buffer, s1, s2) << std::endl;

	std::cout << filename << ".replace has been created" << std::endl;

	ifs.close();
	ofs.close();
	return 0;
}
