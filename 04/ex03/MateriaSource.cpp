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

MateriaSource::MateriaSource() { return ; }

MateriaSource::MateriaSource(const AMateria &src) {
	*this = src;
}

MateriaSource::~MateriaSource() { return ; }

MateriaSource	&MateriaSource::operator=(const AMateria &src) { return ; }

void	MateriaSource::learnMateria(AMateria *) {
	
}
