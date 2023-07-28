/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 23:05:26 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/29 00:16:11 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
	return ;
}

HumanA::~HumanA() { return ; }

void	HumanA::attack() {

	std::cout << this->name << " attacks with their "
			<< this->weapon.getType() << std::endl;

}