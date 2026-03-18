/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 12:35:00 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 12:06:49 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

#define ITER 20

int	main(void)
{
	{
		std::cout << "====== ClapTrap tests" << std::endl;
		ClapTrap	first("Michel"), second;
		ClapTrap	third(first);

		//first.debug();
		//second.debug();
		//third.debug();
		second = first;
		second.debug();
		std::cout << "\n" << std::endl;
		for (int i=0; i<ITER; i++)
		{
			third.attack("IDK");
			//third.debug();
		}
		std::cout << "\n" << std::endl;
		for (int i=0; i<ITER; i++)
		{
			second.beRepaired(1);	
			//second.debug();
		}
		std::cout << "\n" << std::endl;
		for (int i=0; i<ITER; i++)
		{
			first.takeDamage(i);
			//second.debug();
		}
		std::cout << "\n" << std::endl;
	}
	{
		std::cout << "\n====== ScavTrap tests" << std::endl;
		ScavTrap	first("Michel"), second;
		ScavTrap	third(first);

		//first.debug();
		//second.debug();
		//third.debug();
		second = first;
		//second.debug();
		std::cout << "\n" << std::endl;
		for (int i=0; i<ITER; i++)
		{
			third.attack("IDK");
			//third.debug();
		}
		std::cout << "\n" << std::endl;
		for (int i=0; i<ITER; i++)
		{
			second.beRepaired(1);	
			//second.debug();
		}
		std::cout << "\n" << std::endl;
		for (int i=0; i<ITER; i++)
		{
			first.takeDamage(i);
			//second.debug();
		}
		first.guardGate();
		second.guardGate();
		third.guardGate();
	}
	{
		std::cout << "\n====== FragTrap tests" << std::endl;
		FragTrap	first("Michel"), second;
		FragTrap	third(first);

		//first.debug();
		//second.debug();
		//third.debug();
		second = first;
		//second.debug();
		std::cout << "\n" << std::endl;
		for (int i=0; i<ITER; i++)
		{
			third.attack("IDK");
			//third.debug();
		}
		std::cout << "\n" << std::endl;
		for (int i=0; i<ITER; i++)
		{
			second.beRepaired(1);	
			//second.debug();
		}
		std::cout << "\n" << std::endl;
		for (int i=0; i<ITER; i++)
		{
			first.takeDamage(i);
			//second.debug();
		}
		first.highFivesGuys();
		first.highFivesGuys();
		first.highFivesGuys();
	}
	return 0;
}
