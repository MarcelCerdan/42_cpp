/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:26:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/14 11:26:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { return ; }

Cure::Cure(const Cure &src) : AMateria("cure") {

	*this = src;
}

Cure::~Cure() { return ; }

AMateria	*Cure::clone() const {

	AMateria	copy(this);
	return (&copy);
}

void	Cure::use(ICharacter &target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

Cure	&Cure::operator=(const Cure &rhs) : AMateria("cure") {

	return (*this);
}
