/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:56:58 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/28 18:02:55 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span {
	private:
		std::vector<int> _numbers;
		unsigned int N;

	public:
		Span();
		Span(const Span &src);
		Span(unsigned int N);
		~Span();

		Span &operator=(const Span &rhs);

		void addNumber(int nbr);
		int shortestSpan();
		int longestSpan();
		void fillSpan(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
};

#endif
