/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:18:59 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/12 10:32:07 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	private:

	Brain	*_brain;

	public:

	Cat();
	Cat(Cat const &src);
	~Cat();

	Cat &operator=(Cat const &rhs);

	virtual void	makeSound() const;

};

#endif