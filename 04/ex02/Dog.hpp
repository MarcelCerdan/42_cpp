/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:10:03 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/12 10:31:57 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private:

	Brain	*_brain;

	public:

	Dog();
	Dog(Dog const &src);
	~Dog();

	Dog &operator=(Dog const &rhs);

	virtual void		makeSound() const;

};

#endif