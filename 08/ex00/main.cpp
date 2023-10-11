/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:44:08 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/11 14:50:22 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int main() {
	{
		std::list<int>	myList;

		myList.push_back(0);
		myList.push_back(21);
		myList.push_back(42);
		myList.push_back(14);
		myList.push_back(6);
		try {
			std::cout << easyfind(myList, 6) << " found" << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "6 not found" << std::endl;
		}
	}
	{
		std::list<int>	myList;
		
		myList.push_back(0);
		myList.push_back(21);
		myList.push_back(42);
		myList.push_back(14);
		myList.push_back(66);
		try {
			std::cout << easyfind(myList, 6) << " found" << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "6 not found" << std::endl;
		}
	}
}