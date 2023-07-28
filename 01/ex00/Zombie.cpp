/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:18:46 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 18:45:56 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	
	this->name = name;	
	
}

Zombie::~Zombie() {

	std::cout << this->name << " died." << std::endl ;
	
}

void	Zombie::annonce() {

	std::cout << this->name
			<< " : BraiiiiiiinnnzzzZ..."
			<< std::endl ;
		
}
