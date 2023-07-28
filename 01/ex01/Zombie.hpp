/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:13:39 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/28 18:59:02 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
	
	public:
	
	Zombie( std::string name );
	Zombie();
	~Zombie();

	void	annonce();
	void	setName(std::string name);
	
	private:

	std::string	name;

};

Zombie* zombieHorde( int N, std::string name );