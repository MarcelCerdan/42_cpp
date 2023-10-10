/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:44:46 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/09 14:44:46 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T >
void	swap(T &x, T &y) {

	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template < typename T >
T const min(T const x, T const y) {

	return ((x < y) ? x : y);
}

template < typename T >
T const max(T const x, T const y) {

	return ((x > y) ? x : y);
}