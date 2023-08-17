/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:40:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/15 14:40:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	*this = src;
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src) {

	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_inventory[i];
			this->_inventory[i] = src._inventory[i];
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m) {

	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "MateriaSource's inventory is full." << std::endl;
}

AMateria	*MateriaSource::createMateria(const std::string &type) {

	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	std::cout << "This type doesn't exist." << std::endl;
	return (0);
}