/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:00:35 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 22:25:38 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

	int n = 5;
	int i = 0;

	Zombie*	zombies = zombieHorde(n, "Johnny");
	if (!zombies)
		return (0);

	while (i < n)
	{
		zombies[i].announce();
		i++;
	}
	delete [] zombies;

	return 0;

}