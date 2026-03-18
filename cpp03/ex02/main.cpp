/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 12:35:00 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 13:50:05 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

#define ITER 20

int	main(void)
{
	{
		std::cout << "\n====== FragTrap tests\n";
		FragTrap	first("Michel"), second;
		FragTrap	third(first);

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
		first.highFivesGuys();
		first.highFivesGuys();
		first.highFivesGuys();
	}
	return 0;
}
