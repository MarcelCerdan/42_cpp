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
}

Cat::Cat(Cat const &src) : Animal(src) {

	std::cout << "Copy Cat constructor called." << std::endl;
	*this = src;
}

Cat::~Cat() {

	std::cout << "Default Cat destructor called." << std::endl;
}

void	Cat::makeSound() const {

	std::cout << "Meeeooow" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs) {

	this->type = rhs.type;
	return (*this);

}