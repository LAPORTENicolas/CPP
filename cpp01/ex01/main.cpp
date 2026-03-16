/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:20:21 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 19:57:48 by nlaporte         ###   ########.fr       */
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

void	make_a_test(int N, const std::string &name)
{
	Zombie	*z;

	std::cout << "Make a test for " << N << " zombie(s)\n";
	z = zombieHorde(N, name);
	for (int i=0;i<N;i++)
		z[i].annonce();
	delete []z;
	std::cout << "\n";
}

int	main(void)
{

	try 
	{
		make_a_test(-1, "Zombie -1");
		make_a_test(0, "Zombie 0");
		make_a_test(1, "Zombie A");
		make_a_test(1, "Zombies B");
		make_a_test(2, "Zombies C");
		make_a_test(3, "Zombies D");
		make_a_test(3, "Zombies D");
		make_a_test(3, "Zombies D");
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << "\n";
	}
	return 0;
}
