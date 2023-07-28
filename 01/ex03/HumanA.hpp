/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 23:02:06 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/29 00:16:16 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA {

	public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack();

	private:

	std::string name;
	Weapon&		weapon;

};

#endif