/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:40:50 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/30 19:35:48 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {return ;}

Harl::~Harl() {return ;}

void	Harl::complain(std::string filter) {

	int			i = 0;
	std::string	filters[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4 && filters[i].compare(filter) != 0)
		i++;
	switch(i)
	{
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
	}
	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl ;
			
}

void	Harl::debug() {

	std::cout << "[ DEBUG ]" << std::endl
			<< "I love having extra bacon for my 7XL\
-double-cheese-triple-pickle-specialketchup burger. I really do !"
			<< std::endl << std::endl;
	this->info();
}

void	Harl::info() {

	std::cout << "[ INFO ]" << std::endl
			<< "I cannot believe adding extra bacon costs more money. \
You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
			<< std::endl << std::endl;
		this->warning();
}

void	Harl::warning() {

	std::cout << "[ WARNING ]" << std::endl
			<< "I think I deserve to have some extra bacon for free. \
I’ve been coming for years whereas you started working here since last month."
			<< std::endl << std::endl;
	this->error();

}

void	Harl::error() {

	std::cout << "[ ERROR ]" << std::endl
			<< "This is unacceptable ! I want to speak to the manager now."
			<< std::endl << std::endl;
}