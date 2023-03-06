/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:51:48 by fesper-s          #+#    #+#             */
/*   Updated: 2023/03/03 10:55:33 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(Brain const &brain);
		~Brain(void);

		Brain &operator=(Brain const &brain);
};

#endif
