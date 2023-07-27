/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:09:09 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/27 21:44:44 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->contactsAdded = 0;
}

PhoneBook::~PhoneBook() { return ;}

void	PhoneBook::addContact() {
	
	Contact		newContact;
	std::string	input;
	
	std::cout << std::endl << "Please input the contact's informations" <<  std::endl;
	std::cout << "First name : ";
	std::cin >> input;
	newContact.setFirstName(input);
	std::cout << "Last name : ";
	std::cin >> input;
	newContact.setLastName(input);
	std::cout << "Nickname : ";
	std::cin >> input;
	newContact.setNickname(input);
	std::cout << "Phone number : ";
	std::cin >> input;
	newContact.setPhoneNumber(input);
	std::cout << "Darkest Secret : ";
	std::cin >> input;
	newContact.setDarkestSecret(input);
	this->contacts[this->contactsAdded % 8] = newContact;
}

void	PhoneBook::searchContact() {

	

}
