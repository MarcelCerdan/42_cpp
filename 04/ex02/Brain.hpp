/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:54:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/14 08:54:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "iostream"

class Brain {

	private:

	std::string ideas[100];

	public:

	Brain();
	Brain(Brain const &src);
	~Brain();

	Brain &operator=(Brain const &rhs);

};

#endif