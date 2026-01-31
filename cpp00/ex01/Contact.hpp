/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:42:01 by nlaporte          #+#    #+#             */
/*   Updated: 2026/01/29 18:09:04 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _CONTACT_H__

# define _CONTACT_H__
# include <iostream>

class	Contact 
{
	std::string	first_name;
	std::string last_name;
	std::string	nickname;
	std::string number;
	std::string secret;
	std::string format(std::string);

	public:
		Contact();
		Contact(std::string, std::string, std::string, std::string, std::string);
		void	print(bool print_id, int id);
};

#endif
