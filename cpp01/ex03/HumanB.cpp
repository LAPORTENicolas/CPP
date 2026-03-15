/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:42:38 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 19:44:10 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string &name) : _name( name ), _weapon( NULL )
{}

HumanB::HumanB(const std::string &name, Weapon *weapon) : _name( name ), _weapon( weapon )
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
