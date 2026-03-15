/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 12:35:00 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/14 14:00:30 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	first("Michel"), second;
	ClapTrap	third(first);

	//first.debug();
	//second.debug();
	//third.debug();
	second = first;
	//second.debug();
	std::cout << "\n" << std::endl;
	for (int i=0; i<11; i++)
	{
		third.attack("IDK");
		//third.debug();
	}
	std::cout << "\n" << std::endl;
	for (int i=0; i<11; i++)
	{
		second.beRepaired(1);	
		//second.debug();
	}
	std::cout << "\n" << std::endl;
	for (int i=0; i<6; i++)
	{
		first.takeDamage(i);
		//second.debug();
	}
	std::cout << "\n" << std::endl;
	return 0;
}
