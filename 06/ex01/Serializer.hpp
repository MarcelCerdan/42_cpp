/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:34:34 by mthibaul          #+#    #+#             */
/*   Updated: 2023/09/28 16:37:51 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include "Data.hpp"
#include <stdint.h>

class Serializer {

	private:

	Serializer();
	Serializer(Serializer const &src);

	public:

	~Serializer();

	Serializer &operator=(Serializer const &rhs);

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif