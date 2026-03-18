/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 12:35:00 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 13:44:36 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	first("Michel"), second;
	ClapTrap	third(first);

	second = first;
	std::cout << "\n\n";
	for (int i=0; i<11; i++)
	{
		third.attack("IDK");
	}
	std::cout << "\n\n";
	for (int i=0; i<11; i++)
	{
		second.beRepaired(1);	
	}
	std::cout << "\n\n";
	for (int i=0; i<6; i++)
	{
		first.takeDamage(i);
	}
	std::cout << "\n\n";
	return 0;
}
