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

	Zombie*	Bob;

	Bob = newZombie("Bob");
	Bob->annonce();
	randomChump("Billy");
	delete Bob;

	return 0;
}