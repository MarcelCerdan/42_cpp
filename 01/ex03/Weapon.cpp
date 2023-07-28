/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:55:48 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/29 00:20:27 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {
	return ;
}

Weapon::~Weapon() { return ; }

std::string const Weapon::getType() {

	std::string const type = this->type;

	return (type);

}

void	Weapon::setType(std::string newType) {

	this->type = newType;

}