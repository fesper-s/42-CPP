/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:57:09 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/26 12:57:09 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <iterator>

template<typename T>
class MutantStack : public std::stack<T, std::deque<T> > {
	public:
		MutantStack() {}
		MutantStack(const MutantStack &src) {
			*this = src;
		}
		~MutantStack() {}

		MutantStack &operator=(const MutantStack &rhs) {
			(void) rhs;
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {
			return this->c.begin();
		}

		iterator end() {
			return this->c.end();
		}
};

#endif
