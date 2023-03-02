/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:32:03 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/02 09:36:01 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const &dog);
		~Dog(void);

		Dog &operator=(Dog const &dog);

		void makeSound(void) const;
};

#endif
