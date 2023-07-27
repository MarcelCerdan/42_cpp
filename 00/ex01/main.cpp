/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 21:13:44 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/27 21:44:14 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main() {

	std::string input;
	PhoneBook	phoneBook;

	std::cout << "My PhoneBook" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << std::endl << "Please chose if you wish to ADD a contact, \
SEARCH a contact or EXIT your PhoneBook." << std::endl << std::endl;
		std::cin >> input;
		if (input == "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH")
			phoneBook.searchContact();
		else if (input == "EXIT")
			return (0);
		else
			std::cout << std::endl << "Invalid command" << std::endl;
	}
	return (0);
}