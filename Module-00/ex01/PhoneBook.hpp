/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:15:28 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/27 08:24:51 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook {
	private:
		Contact _contact[8];
		int		_index;
		int		_count;
	
	public:
		PhoneBook(void);
		void newContact(Contact contact);
		Contact	getContact(int i);
		int	 getIndex();
};

#endif
