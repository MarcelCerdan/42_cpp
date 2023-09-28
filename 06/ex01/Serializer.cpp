/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:38:10 by mthibaul          #+#    #+#             */
/*   Updated: 2023/09/28 16:44:23 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() { }

Serializer::Serializer(Serializer const &src) {

	*this = src;
}

Serializer::~Serializer() { }

Serializer &Serializer::operator=(Serializer const &other) {

	(void)other;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
	
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw) {

	return (reinterpret_cast<Data *>(raw));
}
