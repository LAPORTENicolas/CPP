/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:13:38 by nlaporte          #+#    #+#             */
/*   Updated: 2026/01/31 10:21:24 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *z = new Zombie(name);
	return z;
}

void randomChump(std::string name)
{
	Zombie z(name);
	z.annonce();
}
