/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:42:38 by nlaporte          #+#    #+#             */
/*   Updated: 2026/02/10 10:23:29 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

/*
HumanB::HumanB()
{
}
*/

HumanB::HumanB(std::string name) : name{ name }, weapon{ NULL }
{
}

HumanB::HumanB(std::string name, Weapon *weapon) : name{ name }, weapon{ NULL }
{}

HumanB::~HumanB()
{
	if (this->weapon)
		delete this->weapon;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon w)
{
	if (this->weapon)
		delete this->weapon;
	this->weapon = new Weapon(w);
}
