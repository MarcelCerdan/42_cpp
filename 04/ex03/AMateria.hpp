/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:03:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/14 11:03:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "Character.hpp"

class ICharacter;

class AMateria {

	protected:

	std::string const type;

	public:

	AMateria(std::string const &type);
	virtual ~AMateria();

	std::string const &getType() const; //Returns the materia type

	virtual	AMateria* clone () const = 0;
	virtual void use(ICharacter& target);

};

#endif