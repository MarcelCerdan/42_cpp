/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:14:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/14 14:14:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "AMateria.hpp"

AMateria::AMateria() : type(NULL) { return ; }

AMateria::AMateria(const std::string &type) : type(type) { return ; }

AMateria::AMateria(const AMateria &src) {

	*this = src;
}

AMateria::~AMateria() { return ; }

AMateria	&AMateria::operator=(const AMateria &rhs) {

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::string const	&AMateria::getType() const {

	return (this->type);
}

void	AMateria::use(ICharacter &target) {

	std::cout << "* uses the materia on " << target.getName()
			<< " *" << std::endl;
}
