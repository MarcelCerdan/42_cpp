/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:15:49 by mthibaul          #+#    #+#             */
/*   Updated: 2023/10/11 14:46:04 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>
# include <exception>

template < typename T >
int easyfind(T const &container, int needle) {

	if (find(container.begin(), container.end(), needle) != container.end())
		return (needle);
	else
		throw std::exception();
}

#endif