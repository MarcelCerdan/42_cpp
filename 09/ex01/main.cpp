/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:29:00 by mthibaul          #+#    #+#             */
/*   Updated: 2024/06/10 14:36:45 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please input an inverted Polish mathematical expression." << std::endl;
		return (1);
	}

	std::string expression = av[1];
	if (expression.empty())
	{
		std::cout << "Please input an inverted Polish mathematical expression." << std::endl;
		return (1);
	}
	RPN rpn(expression);
}
