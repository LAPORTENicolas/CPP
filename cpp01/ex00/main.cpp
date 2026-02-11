/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:20:21 by nlaporte          #+#    #+#             */
/*   Updated: 2026/01/31 10:23:55 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Zombie.hpp"

int	main(void)
{
	Zombie *z = newZombie("Le z de la heap");
	z->annonce();
	delete z;
	randomChump("Le z de la stack");
	return 0;
}
