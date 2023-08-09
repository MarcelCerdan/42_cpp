/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:41:16 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/09 23:52:48 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main() {

	ClapTrap Marcel("Marcel");
	ScavTrap Bill("Bill");
	ScavTrap Bill2(Bill);

	std::cout << std::endl;
	
	Marcel.attack("Bill");
	Bill.takeDamage(0);
	Bill2.attack("Marcel");

	std::cout << std::endl;
		
	Marcel.takeDamage(10);
	Marcel.beRepaired(10);
	Marcel.attack("Bill");

	std::cout << std::endl;
	
	Bill.takeDamage(5);
	Bill.takeDamage(50);
	Bill.takeDamage(50);
	Bill.beRepaired(5);
	Bill.beRepaired(2);
	Bill.guardGate();

	std::cout << std::endl;
}