/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:41:16 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/11 11:54:49 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main() {

	DiamondTrap Marcel("Marcel");
	DiamondTrap Bill("Bill");
	DiamondTrap Bill2 = Bill;

	std::cout << std::endl;
	
	Marcel.attack("Bill");
	Bill.takeDamage(0);

	std::cout << std::endl;
		
	Marcel.takeDamage(10);
	Marcel.beRepaired(10);
	Marcel.attack("Bill");

	std::cout << std::endl;

	Marcel.whoAmI();

	std::cout << std::endl;
}