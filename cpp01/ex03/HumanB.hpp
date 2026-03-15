/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:39:42 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 19:10:17 by nlaporte         ###   ########.fr       */
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
		HumanB(const std::string &name, Weapon *weapon);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};
