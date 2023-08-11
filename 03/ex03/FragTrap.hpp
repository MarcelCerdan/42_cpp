/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 23:55:59 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/11 11:16:53 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	private:


	public:

	FragTrap();
	FragTrap(std::string const name);
	FragTrap(FragTrap const &src);
	~FragTrap();

	FragTrap &operator=(FragTrap const &rhs);

	void	highFivesGuys();

};

#endif