/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:37:24 by fesper-s          #+#    #+#             */
/*   Updated: 2023/06/09 14:57:41 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <cstdlib>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _map;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		~BitcoinExchange();

		BitcoinExchange operator=(const BitcoinExchange &rhs);

		std::map<std::string, float> getMap() const;
		void setMap(const std::map<std::string, float> &map);

		void setDataBase();
		void exchange(const std::string &fileName);
		void validateInputFile(const std::string &fileName);
		void validateValue(const std::string &value, const std::string &date);
};

#endif
