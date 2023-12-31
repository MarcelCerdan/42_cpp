/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:47:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/14 11:47:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"

Character::Character() : name("Marcel") {

	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name) : name(name) {

	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &src) {

	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	*this = src;
}

Character::~Character() {

	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

Character	&Character::operator=(const Character &rhs) {

	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->inventory[i];
			this->inventory[i] = rhs.inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const &Character::getName() const {

	return (this->name);
}

void	Character::equip(AMateria *m) {

	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
	std::cout << this->name << "'s inventory is full." << std::endl;
}

void	Character::unequip(int idx) {

	for (int i = 0; i < 4; i++)
	{
		if (i == idx && this->inventory[i])
		{
			inventory[i] = 0;
			return ;
		}
	}
	std::cout << this->name << " has no Materia in this slot." << std::endl;
}

void	Character::use(int idx, ICharacter &target) {

	for (int i = 0; i < 4; i++)
	{
		if (i == idx && this->inventory[i])
		{
			this->inventory[i]->use(target);
			return ;
		}
	}
	std::cout << this->name << " has no Materia in this slot." << std::endl;
}
