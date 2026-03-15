/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:03:55 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 18:45:30 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*z_ptr;
	int		i;
   
	if (N <= 0)
		return 0;
	try
	{
		z_ptr = new Zombie[N];
	}
	catch (const std::bad_alloc &e)
	{
		throw e;
	}
	i = -1;
	while (++i < N)
		new (&z_ptr[i]) Zombie(name);
	return z_ptr;
}
