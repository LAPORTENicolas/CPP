/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:03:55 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/14 10:05:37 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*p;
	int		i;
   
	//p = new Zombie[N];
	p = static_cast<Zombie*>(operator new(sizeof(Zombie) * N));
	if (!p)
		return NULL;
	i = -1;
	while (++i < N)
		new (&p[i]) Zombie(name);
	return p;
}
