/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:55:58 by fesper-s          #+#    #+#             */
/*   Updated: 2023/06/28 13:56:04 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <list>
# include <vector>
# include <cstdlib>
# include <ctime>

class PmergeMe {
	private:
		std::list<int> _list;
		std::vector<int> _vector;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		~PmergeMe();

		PmergeMe operator=(const PmergeMe &rhs);

		bool parseArg(int argc, char **argv);
		void getTime();
		void execute(int argc, char **argv);
};

#endif
