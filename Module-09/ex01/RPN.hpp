/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:55:52 by fesper-s          #+#    #+#             */
/*   Updated: 2023/06/09 16:26:15 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN {
	private:
		std::stack<int> _stack;
	public:
		RPN();
		RPN(const RPN &src);
		~RPN();

		RPN operator=(const RPN &rhs);

		void execute(const std::string &exp);
};

#endif
