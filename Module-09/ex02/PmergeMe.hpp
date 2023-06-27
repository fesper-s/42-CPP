/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:55:58 by fesper-s          #+#    #+#             */
/*   Updated: 2023/06/20 18:38:03 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <list>
# include <vector>
# include <array>

class PmergeMe {
	private:
		std::list<int> _list;
		std::vector<int> _vector;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		~PmergeMe();

		PmergeMe operator=(const PmergeMe &rhs);

		bool validateArg(char **nbrs);
		void mergeSort();
		void merge();
		void execute(char **nbrs);
};

#endif
