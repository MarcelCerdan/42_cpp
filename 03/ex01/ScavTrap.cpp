/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:45:53 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/10 00:01:47 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

	std::cout << "Default ScavTrap constructor called." << std::endl;
	this->name = "GigaBot";
	this->health = 100;
	this->energy = 50;
	this->attackDamage = 20;

}

ScavTrap::ScavTrap(std::string const name) {

	std::cout << "Default ScavTrap constructor called." << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 50;
	this->attackDamage = 20;

}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {

	std::cout << "Copy ScavTrap constructor called." << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {

	std::cout << "Default ScavTrap destructor called." << std::endl;
	
}

void	ScavTrap::attack(const std::string &target) {

	if (this->energy > 0 && this->health > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target
				<< " causing " << this->attackDamage
				<< " points of damage !" << std::endl;
		this->energy--;
	}
	else if (this->energy <= 0 && this->health > 0)
		std::cout << "ScavTrap " << this->name << " can't attack, he has no energy left !"
				<< std::endl;
	else
		std::cout << "ScavTrap " << this->name << " can't attack because he is dead..."
				<< std::endl;
				
}

void	ScavTrap::guardGate() {

	if (this->health > 0)
		std::cout << "ScavTrap " << this->name
				<< " is now in Guard keeper mode." << std::endl;
	else
		std::cout << "ScavTrap " << this->name
				<< " is dead, he can't switch to Guard keeper mode." << std::endl;

}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {

	this->name = rhs.name;
	this->health = rhs.health;
	this->energy = rhs.energy;
	this->attackDamage = rhs.attackDamage;

	return (*this);

}