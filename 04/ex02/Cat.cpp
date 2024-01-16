/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:20:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/12 10:32:10 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {

	std::cout << "Default Cat constructor called." << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal(src) {

	std::cout << "Copy Cat constructor called." << std::endl;
	*this = src;
}

Cat::~Cat() {

	std::cout << "Default Cat destructor called." << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const {

	std::cout << "Meeeooow" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs) {

	if (this != &rhs)
	{
		this->type = rhs.type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}