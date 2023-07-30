/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:29:48 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/30 19:32:01 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {

	Harl	harl;

	if (ac != 2)
		std::cerr << "Incorrect number of arguments." << std::endl;
	else
		harl.complain(av[1]);

}