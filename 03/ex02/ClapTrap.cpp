/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:13:29 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/10 00:13:27 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Bot"), health(10), energy(10), attackDamage(0) {

	std::cout << "Default ClapTrap constructor called." << std::endl;

}

ClapTrap::ClapTrap(std::string name) : name(name), health(10), energy(10), attackDamage(0) {

	std::cout << "Default ClapTrap constructor called." << std::endl;

}

ClapTrap::ClapTrap(ClapTrap const &src) {

	std::cout << "Copy ClapTrap constructor called." << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {

	std::cout << "Default ClapTrap destructor called." << std::endl;

}

void	ClapTrap::attack(const std::string &target) {

	if (this->energy > 0 && this->health > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target
				<< " causing " << this->attackDamage
				<< " points of damage !" << std::endl;
		this->energy--;
	}
	else if (this->energy <= 0 && this->health > 0)
		std::cout << "ClapTrap " << this->name << " can't attack, he has no energy left !"
				<< std::endl;
	else
		std::cout << "ClapTrap " << this->name << " can't attack because he is dead..."
				<< std::endl;
				
}

void	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "ClapTrap " << this->name << " takes " << amount
			<< " points of damage" << std::endl;
	this->health -= amount;
	if (this->health <= 0)
		std::cout << "Oh no ! ClapTrap " << this->name
				<< " is dead !!!" << std::endl;
				
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->energy > 0 && this->health > 0)
	{
		std::cout << "ClapTrap " << this->name << " repairs himself and regains "
				<< amount << " points of health !" << std::endl;
		this->health += amount;
		this->energy--;
	}
	else if (this->energy <= 0 && this->health > 0)
		std::cout << "ClapTrap " << this->name << " can't fix himself, he has no energy left !"
				<< std::endl;
	else
		std::cout << "It's to late for ClapTrap " << this->name
				<< " to fix himself, he is already dead..." << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {

	this->name = rhs.name;
	this->health = rhs.health;
	this->energy = rhs.energy;
	this->attackDamage = rhs.attackDamage;

	return (*this);

}