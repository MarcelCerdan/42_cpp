/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:37:00 by mthibaul          #+#    #+#             */
/*   Updated: 2023/08/15 14:37:00 by mthibaul         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:

	MateriaSource();
	MateriaSource(Materia const &src);
	~MateriaSource();

	MateriaSource	&operator=(Materia const &src);

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);

};

#endif