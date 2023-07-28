/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:06:21 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 13:29:38 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

class PhoneBook {
	
private:

	Contact contacts[8];
	int		contactsAdded;

public:

	PhoneBook();
	~PhoneBook();
	
	void	addContact();
	int		searchContact();
	void	printContact();
	
};

#endif