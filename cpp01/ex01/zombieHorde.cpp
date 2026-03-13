/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:03:55 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/13 10:04:36 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie 	*p;
	int		i;
   
	p = new Zombie[n];
	if (!p)
		return NULL;
	i = -1;
	while (++i < n)
		new ((char *)(p) + i * sizeof(Zombie)) Zombie(name);
	return (Zombie*)p;
}
