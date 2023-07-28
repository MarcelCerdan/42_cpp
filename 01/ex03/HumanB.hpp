/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 23:15:36 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/29 00:22:09 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB {

	public:

	HumanB(std::string name);
	~HumanB();
	
	void attack();
	void setWeapon(Weapon& newWeapon);

	private:

	std::string	name;
	Weapon*		weapon;
	
};

#endif