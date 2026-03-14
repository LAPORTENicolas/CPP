/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:29:53 by nlaporte          #+#    #+#             */
/*   Updated: 2026/02/21 17:14:42 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _PHONEBOOK_H__

# define _PHONEBOOK_H__
# include "Contact.hpp"

class	Phonebook
{
	Contact			contact[8];
	unsigned int	count;
	bool			print_all;
	int				isprint(std::string);
	int				isnum(std::string);
	int				valide_string(std::string);
	std::string		getid(std::string);
	std::string		getinput(std::string);

	public:
		Phonebook(void);
		void	search(void);
		void	add(void);
};

#endif
