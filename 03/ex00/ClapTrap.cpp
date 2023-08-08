/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:13:29 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/08 16:30:49 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Bot"), health(10), energy(10), attackDamage(0) { return ; }

ClapTrap::ClapTrap(std::string name) : name(name), health(10), energy(10), attackDamage(0) { return ; }

ClapTrap::ClapTrap(ClapTrap const &src) {
	*this = src;
}

ClapTrap::~ClapTrap() { return ; }

void	ClapTrap::attack(const std::string &target) {

	if (this->energy > 0 && this->health > 0)
	{
		std::cout << this->name << " attacks " << target
				<< " causing " << this->attackDamage
				<< " points of damage !" << std::endl;
		this->energy--;
	}
	else if (this->energy <= 0 && this->health > 0)
		std::cout << this->name << " can't attack, he has no energy left !"
				<< std::endl;
	else
		std::cout << this->name << " can't attack because he is dead..."
				<< std::endl;
				
}

void	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << this->name << " takes " << amount
			<< " points of damage" << std::endl;
	this->health -= amount;
	if (this->health <= 0)
		std::cout << "Oh no ! " << this->name
				<< " is dead !!!" << std::endl;
				
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->energy > 0 && this->health > 0)
	{
		std::cout << this->name << " repairs himself and regains "
				<< amount << " points of health !" << std::endl;
		this->health += amount;
		this->energy--;
	}
	else if (this->energy <= 0 && this->health > 0)
		std::cout << this->name << " can't fix himself, he has no energy left !"
				<< std::endl;
	else
		std::cout << "It's to late for " << this->name
				<< " to fix himself, he is already dead..." << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {

	this->name = rhs.name;
	this->health = rhs.health;
	this->energy = rhs.energy;
	this->attackDamage = rhs.attackDamage;

	return (*this);

}