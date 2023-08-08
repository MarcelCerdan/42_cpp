/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:41:16 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/08 16:33:41 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {

	ClapTrap Marcel("Marcel");
	ClapTrap Bill("Bill");

	Marcel.attack("Bill");
	Bill.takeDamage(0);

	std::cout << std::endl;
		
	Marcel.takeDamage(10);
	Marcel.beRepaired(10);
	Marcel.attack("Bill");

	std::cout << std::endl;
	
	Bill.takeDamage(5);
	Bill.beRepaired(5);
	Bill.attack("Marcel");
	Bill.attack("Marcel");
	Bill.attack("Marcel");
	Bill.attack("Marcel");
	Bill.attack("Marcel");
	Bill.attack("Marcel");
	Bill.attack("Marcel");
	Bill.attack("Marcel");
	Bill.attack("Marcel");
	Bill.attack("Marcel");
	Bill.beRepaired(2);
}