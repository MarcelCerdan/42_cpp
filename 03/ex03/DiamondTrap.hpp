/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 00:16:25 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/11 11:54:14 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

	private:

	std::string	name;

	public:

	DiamondTrap();
	DiamondTrap(std::string const name);
	DiamondTrap(DiamondTrap const &src);
	~DiamondTrap();

	DiamondTrap &operator=(DiamondTrap const &rhs);

	void	attack(std::string const &target);
	void	whoAmI();

};

#endif