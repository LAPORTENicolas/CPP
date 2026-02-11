/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:37:05 by nlaporte          #+#    #+#             */
/*   Updated: 2026/02/06 11:58:53 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _HUMANA_H__

# define _HUMANA_H__
# include "Weapon.hpp"

class HumanA
{
	Weapon 		&weapon;
	std::string	name;

	public:
		HumanA(Weapon &weapon);
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
};

#endif
