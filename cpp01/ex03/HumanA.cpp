/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:40:21 by nlaporte          #+#    #+#             */
/*   Updated: 2026/02/06 11:57:52 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(Weapon &weapon) : weapon(weapon)
{}

HumanA::HumanA(std::string name, Weapon &weapon) : name{ name }, weapon{ weapon }
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
