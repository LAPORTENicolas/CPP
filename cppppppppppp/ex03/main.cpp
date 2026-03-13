/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:00:04 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/09 19:56:26 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		std::cout << "\n\nHuman B" << std::endl;
		Weapon club = Weapon("crude spiked club");
		Weapon gun = Weapon("big gun");
		HumanB bob("Bob");
		bob.attack();
		std::cout << "Human B switch weapon" << std::endl;
		bob.setWeapon(club);
		bob.attack();
		std::cout << "Human B switch weapon" << std::endl;
		bob.setWeapon(gun);
		bob.attack();
		//bob.setWeapon(gun);

	}
	return 0;
}
