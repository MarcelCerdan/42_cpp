/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:13:39 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 18:44:03 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
	
	public:
	
	Zombie( std::string name );
	~Zombie();

	void	annonce();
	
	private:

	std::string	name;

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );