/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:20:21 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/14 10:27:13 by nlaporte         ###   ########.fr       */
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

void	make_a_test(int N, std::string name)
{
	Zombie	*z;

	if (N <= 0)
		N = 0;
	std::cout << "Make a test for " << N << " zombie(s)" << std::endl;
	z = zombieHorde(N, name);
	for (int i=0;i<N;i++)
		z[i].annonce();
	for (int i=0;i<N;i++)
		z[i].~Zombie();
	operator delete (z);
	std::cout << "\n";
}

int	main(void)
{
	make_a_test(10, "A");
	make_a_test(1, "B");
	make_a_test(2, "C");
	make_a_test(3, "D");
	make_a_test(5, "E");
	return 0;
}
