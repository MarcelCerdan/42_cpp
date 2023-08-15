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

AMateria::AMateria(const std::string &type) : type(type) { return ; }

AMateria::~AMateria() { return ; }

std::string const	&AMateria::getType() const {

	return (this->type);
}
