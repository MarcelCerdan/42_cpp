/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:50:20 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/10 13:10:35 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T, typename U>
void	iter(T x, std::size_t len, U fct) {

	for (std::size_t i = 0; i < len ; i++)
	{
		fct(*x);
		x++;
	}
}