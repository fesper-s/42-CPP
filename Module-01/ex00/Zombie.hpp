/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:54:50 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/18 21:23:39 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
