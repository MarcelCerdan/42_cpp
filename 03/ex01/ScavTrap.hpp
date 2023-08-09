/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:37:44 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/09 23:43:35 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : ClapTrap {

	private:

	public:

	ScavTrap();
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &rhs);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();

};

#endif
