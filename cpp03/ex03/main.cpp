/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 12:35:00 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 13:43:17 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

#define ITER 20

int	main(void)
{
	{
		std::cout << "\n====== FragTrap tests\n";
		DiamondTrap first("Michel"), second;
		DiamondTrap third(first);

		std::cout << "\n";
		first.whoAmI();
		second.whoAmI();
		second = first;
		second.whoAmI();
		third.whoAmI();
		std::cout << "\n";
	}
	return 0;
}
