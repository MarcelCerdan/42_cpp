/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:56:43 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/10 13:18:40 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	test(int a) {
	
	std::cout << (a + 10) << std::endl;
}

int	main() {

	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8 , 9, 10};
	char str[10] = "Bonjour !";
	
	::iter<char *>(str, static_cast<std::size_t>(10), test);
	
	std::cout << std::endl;

	::iter<int *>(tab, static_cast<std::size_t>(10), test);
}