/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:10:24 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 10:09:43 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &wrongAnimal);
		virtual ~WrongAnimal(void);

		WrongAnimal &operator=(WrongAnimal const &wrongAnimal);
		std::string getType(void) const;
		void makeSound(void) const;
};

#endif
