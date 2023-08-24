/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:18:46 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 18:59:55 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	
	this->name = name;	
	
}

Zombie::Zombie() {

	this->name = "Marcel";
	
}

Zombie::~Zombie() {

	std::cout << this->name << " died." << std::endl ;
	
}

void	Zombie::announce() {

	std::cout << this->name
			<< " : BraiiiiiiinnnzzzZ..."
			<< std::endl ;
		
}

void	Zombie::setName(std::string name) {

	this->name = name;

}