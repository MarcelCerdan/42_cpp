/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:50:38 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 13:42:40 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {

	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";

}

Contact::~Contact() { return ;}

void	Contact::setFirstName( std::string first_name ) {
	this->first_name = first_name;
}

std::string	Contact::getFirstName() {
	return(this->first_name);
}

void	Contact::setLastName( std::string last_name ) {
	this->last_name = last_name;
}

std::string	Contact::getLastName() {
	return(this->last_name);
}

void	Contact::setNickname( std::string nickname ) {
	this->nickname = nickname;
}

std::string	Contact::getNickname() {
	return(this->nickname);
}

void	Contact::setPhoneNumber( std::string phone_number ) {
	this->phone_number = phone_number;
}

std::string	Contact::getPhoneNumber() {
	return(this->phone_number);
}

void	Contact::setDarkestSecret( std::string darkest_secret ) {
	this->darkest_secret = darkest_secret;
}

std::string	Contact::getDarkestSecret() {
	return(this->darkest_secret);
}

void	Contact::printInfos() {

	std::cout << std::endl;
	std::cout << "First name : " << Contact::getFirstName() << std::endl;
	std::cout << "Last name : " << Contact::getLastName() << std::endl;
	std::cout << "Nickname : " << Contact::getNickname() << std::endl;
	std::cout << "Phone number : " << Contact::getPhoneNumber() << std::endl;
	std::cout << "Darkeset secret : " << Contact::getDarkestSecret() << std::endl;

}

