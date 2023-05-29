/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:37:24 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/29 17:39:06 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>

class BitcoinExchange
{
	private:
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		~BitcoinExchange();

		BitcoinExchange operator=(const BitcoinExchange &rhs);
};

#endif
