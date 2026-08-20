/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:03:43 by nlaporte          #+#    #+#             */
/*   Updated: 2026/08/19 20:45:24 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <vector>
#include <iostream>
#include "easyfind.tpp"

void try_easyfind(std::vector<int> v, int toFind)
{
	try
	{
        int idx =  easyfind(v,toFind);
		std::cout << "Value index:  " << idx << "\n";
	}
	catch (const std::exception &err)
	{
		std::cout << "Throw: " << err.what() << "\n";
	}
}

int	main(void)
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

    try_easyfind(v, 10);
    try_easyfind(v, 20);
    try_easyfind(v, 30);
    try_easyfind(v, 40);
    try_easyfind(v, 44);
    /*
	try
	{
		std::cout << "Value find = " << easyfind(v,10) << "\n";
		std::cout << "Value find = " << easyfind(v,20) << "\n";
		std::cout << "Value find = " << easyfind(v,30) << "\n";
		std::cout << "Value find = " << easyfind(v, 44) << "\n";
	}
	catch (const std::exception &err)
	{
		std::cout << err.what() << "\n";
	}
    */
	return 0;
}
