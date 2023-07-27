/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:43:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/27 18:19:30 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void	upper_str(char *str);

int	main (int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i=1; av[i]; i++)
			upper_str(av[i]);
	}
	std::cout << std::endl;
}

static void	upper_str(char *str)
{
	for (int i=0; str[i]; i++)
		std::cout << (char) toupper(str[i]);
}