/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:45:18 by mthibaul          #+#    #+#             */
/*   Updated: 2023/09/28 16:51:55 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main() {
	
	Data	data = {7};
	Data	*ptr;

	std::cout << "Original pointer : " << &data << std::endl;
	uintptr_t	nb = Serializer::serialize(&data);
	ptr = Serializer::deserialize(nb);
	std::cout << "Final pointer : " << ptr << std::endl;
	
}