/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:33:31 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/12 10:35:16 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal {

	protected:

	std::string	type;

	public:

	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal();

	WrongAnimal &operator=(WrongAnimal const &rhs);

	void		makeSound() const;
	std::string	getType() const;

};

#endif