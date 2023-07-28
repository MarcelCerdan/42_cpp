/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:51:46 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/29 00:20:11 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon {

	public:

	Weapon(std::string type);
	~Weapon();

	std::string const	getType();
	void				setType(std::string newType);

	private:

	std::string type;

};

#endif