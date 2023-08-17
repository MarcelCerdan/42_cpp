/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:21:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/14 11:21:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { return ; }

Ice::Ice(const Ice &src) : AMateria("ice") {

	*this = src;
}

Ice::~Ice() { return ; }

AMateria	*Ice::clone() const {

	AMateria *copy = new Ice(*this);

	return (copy);
}

void	Ice::use(ICharacter &target) {

	std::cout << "* shoots an ice bolt at " << target.getName()
			<< " *" << std::endl;
}

Ice	&Ice::operator=(const Ice &rhs) {

	(void) rhs;
	return (*this);
}