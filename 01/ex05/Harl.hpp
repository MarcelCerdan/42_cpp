/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:37:28 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/30 18:59:59 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl {

	public:

	Harl();
	~Harl();

	void complain( std::string level );

	private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

};