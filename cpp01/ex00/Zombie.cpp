/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:21:30 by nlaporte          #+#    #+#             */
/*   Updated: 2026/01/31 10:25:30 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) : name{ name }
{
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": is now free !" << std::endl;
}

void	Zombie::annonce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
