/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:54:13 by fesper-s          #+#    #+#             */
/*   Updated: 2023/05/09 09:29:20 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &src);
		~Intern();

		Intern &operator=(const Intern &rhs);

		class MakeFormException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		AForm *makeForm(const std::string &formName, const std::string &formTarget);
};

#endif
