/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 23:18:25 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/29 00:22:07 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
	return ;
}

HumanB::~HumanB() { return ; }

void	HumanB::attack() {

	std::cout << this->name << " attacks with their ";
	if (this->weapon == NULL)
		std::cout << "bare hands" << std::endl;
	else
		std::cout << this->weapon->getType() << std::endl;

}

void	HumanB::setWeapon(Weapon& newWeapon) {

	this->weapon = &newWeapon;

}