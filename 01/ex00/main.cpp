/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:37:41 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 18:47:08 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {

	Zombie*	zombie = newZombie("Marcel");
	zombie->announce();

	randomChump("Billy");
	delete zombie;
	return 0;
}