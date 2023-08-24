/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:50:37 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 19:07:05 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	if (N <= 0)
	{
		std::cout << "Incorrect number of zombies" << std::endl;
		return (NULL);
	}
	Zombie*	zombies = new Zombie[N];
	int		i = 0;

	while (i < N)
	{
		zombies[i].setName(name);
		i++;
	}
	return (zombies);
}
