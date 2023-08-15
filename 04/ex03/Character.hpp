/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:32:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/14 11:32:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Ice.hpp"
# include "Cure.hpp"
# include "ICharacter.hpp"

class	Character : public ICharacter {

	protected:

	std::string	const	name;
	AMateria			*inventory[4];

	public:

	Character();
	Character(std::string name);
	Character(Character const &src);
	~Character();

	Character &operator=(Character const &rhs);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

};

#endif