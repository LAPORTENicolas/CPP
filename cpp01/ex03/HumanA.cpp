/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:40:21 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 20:06:26 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name( name ), _weapon( weapon )
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "\n";
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}
