/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:56:30 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/26 12:56:31 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <map>
# include <vector>

template<typename T>
typename T::iterator easyfind(T &intContainer, int nbr) {
	for (typename T::iterator it = intContainer.begin(); it != intContainer.end(); it++) {
		if (*it == nbr)
			return it;
	}
	throw std::runtime_error("Exception: No occurrence found");
}

#endif
