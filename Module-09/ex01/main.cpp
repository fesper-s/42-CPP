/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:50:53 by fesper-s          #+#    #+#             */
/*   Updated: 2023/06/09 16:25:39 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc != 2){
		std::cerr << "Error" << std::endl;
		return 1;
	}
	RPN rpn;
	rpn.execute(argv[1]);
	return 0;
}
