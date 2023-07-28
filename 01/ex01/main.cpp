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

	Zombie*	zombies;
	int		i = 0;

	zombies = zombieHorde(15, "Johnny");
	while (i < 15)
	{
		zombies[i].annonce();
		i++;
	}
	delete [] zombies;

	return 0;

}