/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:39:42 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/06 08:46:49 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef _HUMANB_H__
# define _HUMANB_H__
# include "Weapon.hpp"

class HumanB
{
	std::string	name;
	Weapon		*weapon;

	public:
		HumanB();
		HumanB(std::string name);
		HumanB(std::string name, Weapon *weapon);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif
