/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:20:21 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/13 11:13:49 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Zombie.hpp"
#include <iostream>

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

void	make_a_test(int N)
{
	Zombie	*z;

	std::cout << "Make a test for " << N << " z" << std::endl;
	if (N <= 0)
		N = 0;
	z = zombieHorde(N, "Z");
	for (int i=0;i<N;i++)
		z[i].annonce();
	delete []z;
	std::cout << "\n";
}

int	main(void)
{
	make_a_test(10);
	make_a_test(0);
	make_a_test(1);
	make_a_test(2);
	make_a_test(3);
	make_a_test(5);
	return 0;
}
