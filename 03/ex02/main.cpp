/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:41:16 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/11 11:03:58 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int	main() {

	ClapTrap Marcel("Marcel");
	ScavTrap Bill("Bill");
	FragTrap Bruce("Bruce");

	std::cout << std::endl;
	
	Marcel.attack("Bill");
	Bill.takeDamage(0);

	std::cout << std::endl;
		
	Marcel.takeDamage(10);
	Marcel.beRepaired(10);
	Marcel.attack("Bill");

	std::cout << std::endl;
	
	Bruce.highFivesGuys();
	Bruce.takeDamage(5);
	Bruce.takeDamage(50);
	Bruce.takeDamage(50);
	Bruce.beRepaired(5);
	Bruce.beRepaired(2);
	Bruce.highFivesGuys();

	std::cout << std::endl;
}