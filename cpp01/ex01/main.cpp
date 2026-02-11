/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:20:21 by nlaporte          #+#    #+#             */
/*   Updated: 2026/02/05 16:00:34 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Zombie.hpp"

/*
int	main(void)
{
	Zombie *z = newZombie("Le z de la heap");
	z->annonce();
	delete z;
	randomChump("Le z de la stack");
	return 0;
}
*/

int	main(void)
{
	Zombie	*z;
	int		N;
   
	N = 1000;
	z = zombieHorde(N, "Z");
	for (int i=0;i<N;i++)
		z[i].~Zombie();
	operator delete(z);
	return 0;
}
