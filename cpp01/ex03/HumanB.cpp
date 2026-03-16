/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:42:38 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 20:02:09 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string &name) : _name( name ), _weapon( NULL )
{}

HumanB::~HumanB()
{}

void	HumanB::attack()
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks with nothing" << "\n";
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << "\n";
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
