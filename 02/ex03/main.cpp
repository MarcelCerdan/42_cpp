/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:22:38 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/08 11:32:50 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int	main() {

	Point 	a(1, 1);
	Point	b(3, 5);
	Point	c(11, 0);
	Point	inside(0, 0);
	Point	outside(3, 2);
	Point	on(1, 1);
		
	if (bsp(a, b, c, inside) == true)
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;
	if (bsp(a, b, c, outside) == true)
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;
	if (bsp(a, b, c, on) == true)
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;
}