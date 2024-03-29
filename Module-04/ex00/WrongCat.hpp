/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:19:45 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 09:15:52 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(WrongCat const &wrongCat);
		~WrongCat(void);

		WrongCat &operator=(WrongCat const &wrongCat);

		void makeSound(void) const;
};

#endif
