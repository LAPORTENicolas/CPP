/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:37:05 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 20:06:09 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"

class HumanA
{
	std::string	_name;
	Weapon 		&_weapon;

	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();
		void	attack();
		void	setWeapon(Weapon &weapon);
};
