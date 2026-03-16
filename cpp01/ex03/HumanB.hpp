/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:39:42 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 20:02:00 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"

class HumanB
{
	std::string	_name;
	Weapon		*_weapon;

	public:
		HumanB();
		HumanB(const std::string &name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};
