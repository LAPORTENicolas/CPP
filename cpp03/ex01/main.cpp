/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 12:35:00 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 13:46:23 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

#define ITER 3

int	main(void)
{
	{
		std::cout << "\n====== ScavTrap tests\n";
		ScavTrap	first("Michel"), second;
		ScavTrap	third(first);

		second = first;
		std::cout << "\n\n";
		for (int i=0; i<ITER; i++)
		{
			third.attack("IDK");
		}
		std::cout << "\n\n";
		for (int i=0; i<ITER; i++)
		{
			second.beRepaired(1);	
		}
		std::cout << "\n\n";
		for (int i=0; i<ITER; i++)
		{
			first.takeDamage(i);
		}
		first.guardGate();
		second.guardGate();
		third.guardGate();
	}
	return 0;
}
