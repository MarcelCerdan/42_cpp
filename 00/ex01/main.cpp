/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 21:13:44 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 13:30:56 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main() {

	std::string input;
	PhoneBook	phoneBook;

	std::cout << "My PhoneBook" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << std::endl << "Please chose if you wish to ADD a contact, "
				<< "SEARCH a contact or EXIT your PhoneBook." << std::endl << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (phoneBook.addContact() == -1)
				return (-1);
		}
		else if (input == "SEARCH")
		{
			if (phoneBook.searchContact())
				phoneBook.printContact();
		}
		else if (input == "EXIT")
			return (0);
		else if (!input.empty())
			std::cout << std::endl << "Invalid command" << std::endl;
	}
	return (0);
}