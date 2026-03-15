/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:21:30 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 23:44:11 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(void)
{}

Zombie::Zombie(const std::string &name) : _name( name )
{}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": is now free !\n";
}

void	Zombie::annonce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
