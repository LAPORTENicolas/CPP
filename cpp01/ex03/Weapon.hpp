/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:30:54 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 19:55:52 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Weapon
{
	std::string	_type;

	public:
		Weapon();
		Weapon(const std::string &type);
		~Weapon();
		const std::string	&getType(); 
		void				setType(const std::string &type);
};
