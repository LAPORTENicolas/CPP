/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:27:37 by nlaporte          #+#    #+#             */
/*   Updated: 2026/01/31 11:21:52 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	void 	*p;
   
	p = operator new(sizeof(Zombie) * n);
	if (!p)
		return NULL;
	for (int i=0;i<n;i++)
		new ((char*)(p) + i * sizeof(Zombie)) Zombie(name);
	return (Zombie*)p;
}
