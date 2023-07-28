/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:09:09 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 13:46:49 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	printColumns();
void	printInfoColumn(std::string str);
bool	isNumber(std::string str);

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
	this->contactsAdded++;
}

int	PhoneBook::searchContact() {

	if (this->contactsAdded == 0) {
		std::cout << std::endl << "You don't have any contact yet." << std::endl;
		std::cout << "To SEARCH a contact, first use ADD to add at least one \
contat to your PhoneBook" << std::endl;
		return 0;
	}
	std::cout << "PhoneBook's contacts" << std::endl << std::endl;
	std::cout << std::setw(10);
	for (int i = 0; i < 8; i++)
	{
		if (this->contactsAdded <= i)
			break ;
		printColumns();
		std::cout << i + 1;
		printColumns();
		printInfoColumn(this->contacts[i].getFirstName());
		printColumns();
		printInfoColumn(this->contacts[i].getLastName());
		printColumns();
		printInfoColumn(this->contacts[i].getNickname());
		printColumns();
		std::cout << std::endl;
	}
	return 1;

}

void	printColumns() {
	
	std::cout << "|";
	std::cout << std::setw(10);
	
}

void	printInfoColumn(std::string str) {

	std::string	resizedStr;

	resizedStr = str;
	if (resizedStr.size() > 10)
	{
		resizedStr.resize(9);
		resizedStr += ".";
	}
	std::cout << resizedStr;
}

void	PhoneBook::printContact() {

	std::string input;

	std::cout << std::endl << "Input the index of the contact you want to display : ";
	std::cin >> input;
	if (isNumber(input) && (input[0] - 48 <= this->contactsAdded % 8) )
		this->contacts[input[0] - 49].printInfos();
	else if (!std::cin.eof()) {
		std::cout << "Invalid index. Please input a valid number between 1 and ";
		std::cout << this->contactsAdded % 8 << "." << std::endl;
		this->printContact();
	}
}

bool	isNumber(std::string str) {

	if (str[0] <= 57 && str[0] > 48 && str.size() == 1)
		return (true);
	return (false);
}