/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:11:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/14 09:11:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { return ; }

Brain::Brain(const Brain &src) {

	*this = src;
}

Brain::~Brain() { return ; }

Brain	&Brain::operator=(const Brain &rhs) {

	for(int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}