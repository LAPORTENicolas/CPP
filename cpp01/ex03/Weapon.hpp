/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:30:54 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 14:03:36 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef _WEAPON_H__
# define _WEAPON_H__

# include <string>

class Weapon
{
	std::string	_type;

	public:
		Weapon();
		Weapon(std::string);
		~Weapon();
		const std::string	getType() const;
		void				setType(std::string type);
};

#endif
