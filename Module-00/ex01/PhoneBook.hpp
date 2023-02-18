/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:15:28 by fesper-s          #+#    #+#             */
/*   Updated: 2023/02/17 20:58:58 by fesper-s         ###   ########.fr       */
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
		void newContact(Contact contact);
		Contact	getContact(int i);
		int	 getIndex();
};

#endif
