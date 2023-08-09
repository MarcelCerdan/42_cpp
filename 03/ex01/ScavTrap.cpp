/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:45:53 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/09 23:53:25 by mthibaul         ###   ########.fr       */
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

void	ScavTrap::takeDamage(unsigned int amount) {

	std::cout << "ScavTrap " << this->name << " takes " << amount
			<< " points of damage" << std::endl;
	this->health -= amount;
	if (this->health <= 0)
		std::cout << "Oh no ! ScavTrap " << this->name
				<< " is dead !!!" << std::endl;
				
}

void	ScavTrap::beRepaired(unsigned int amount) {

	if (this->energy > 0 && this->health > 0)
	{
		std::cout << "ScavTrap " << this->name << " repairs himself and regains "
				<< amount << " points of health !" << std::endl;
		this->health += amount;
		this->energy--;
	}
	else if (this->energy <= 0 && this->health > 0)
		std::cout << "ScavTrap " << this->name << " can't fix himself, he has no energy left !"
				<< std::endl;
	else
		std::cout << "It's to late for ScavTrap " << this->name
				<< " to fix himself, he is already dead..." << std::endl;
}

void	ScavTrap::guardGate() {

	if (this->health > 0)
		std::cout << "ScavTrap " << this->name
				<< " is now in Gate keeper mode." << std::endl;
	else
		std::cout << "ScavTrap " << this->name
				<< " is dead, he can't switch to Gurad keeper mode." << std::endl;

}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {

	this->name = rhs.name;
	this->health = rhs.health;
	this->energy = rhs.energy;
	this->attackDamage = rhs.attackDamage;

	return (*this);

}