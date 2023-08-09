/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 23:57:16 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/10 00:12:45 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {

	std::cout << "Default FragTrap constructor called." << std::endl;
	this->name = "MegaBot";
	this->health = 100;
	this->energy = 100;
	this->attackDamage = 30;

}

FragTrap::FragTrap(std::string const name) {

	std::cout << "Default FragTrap constructor called." << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 100;
	this->attackDamage = 30;
	
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {

	std::cout << "Copy FragTrap constructor called." << std::endl;
	*this = src;
}

FragTrap::~FragTrap() {

	std::cout << "Default FragTrap destructor called." << std::endl;
	
}

void	FragTrap::highFivesGuys() {

	if (this->health > 0)
		std::cout << "FragTrap " << this->name << " says : "
				<< "\"Gimme Five !\"" << std::endl;
	else
		std::cout << "FragTrap " << this->name
				<< " can't ask for a high five, he's dead !" << std::endl;

}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {

	this->name = rhs.name;
	this->health = rhs.health;
	this->energy = rhs.energy;
	this->attackDamage = rhs.attackDamage;

	return (*this);

}