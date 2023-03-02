/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:22:26 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/02 09:39:18 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(Animal const &animal);
		virtual ~Animal(void);
		
		Animal &operator=(Animal const &animal);

		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif
