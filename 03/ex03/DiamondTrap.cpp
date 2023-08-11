/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:21:11 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/11 11:56:32 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	std::cout << "Default DiamondTrap constructor called." << std::endl;

}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"), name(name) {

	std::cout << "DiamondTrap constructor called." << std::endl;
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->attackDamage = FragTrap::attackDamage;
	
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), FragTrap(src), ScavTrap(src) {

	std::cout << "DiamondTrap copy constructor called." << std::endl;

}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap default destructor called." << std::endl;

}

void	DiamondTrap::attack(std::string const &target) {

	ScavTrap::attack(target);

}

void	DiamondTrap::whoAmI() {

	std::cout << this->name << std::endl
			<< ClapTrap::name << std::endl;

}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs) {

	this->name = rhs.name;
	this->health = rhs.health;
	this->energy = rhs.energy;
	this->attackDamage = rhs.attackDamage;

	return (*this);

}