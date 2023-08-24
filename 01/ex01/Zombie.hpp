/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:13:39 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 23:07:34 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	
	public:
	
	Zombie( std::string name );
	Zombie();
	~Zombie();

	void	announce();
	void	setName(std::string name);
	
	private:

	std::string	name;

};

Zombie* zombieHorde( int N, std::string name );

#endif