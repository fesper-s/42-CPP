/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:42:08 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/02 09:36:06 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat const &cat);
		~Cat(void);

		Cat &operator=(Cat const &cat);

		void makeSound(void) const;
};

#endif
