/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthibaul <mthibaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:35:17 by mthibaul          #+#    #+#             */
/*   Updated: 2023/07/27 21:47:48 by mthibaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>
# include <iomanip>

class Contact {

private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	
public:

	Contact();
	~Contact();

	void		setFirstName(std::string);
	std::string	getFirstName();
	void		setLastName(std::string);
	std::string	getLastName();
	void		setNickname(std::string);
	std::string	getNickname();
	void		setPhoneNumber(std::string);
	std::string	getPhoneNumber();
	void		setDarkestSecret(std::string);
	void		printInfos();
};

#endif