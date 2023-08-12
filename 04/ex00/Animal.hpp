/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:05:35 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/12 10:35:14 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal {

	protected:

	std::string	type;

	public:

	Animal();
	Animal(Animal const &src);
	~Animal();

	Animal &operator=(Animal const &rhs);

	virtual void	makeSound() const;
	std::string		getType() const;

};

#endif