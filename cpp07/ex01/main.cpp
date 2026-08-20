/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 21:47:23 by nlaporte          #+#    #+#             */
/*   Updated: 2026/08/19 20:35:12 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <unistd.h>

template <typename T>
void	print_value(T &arg)
{
	std::cout << arg << "\n";
}

/*
template <typename T>
void print_value(const T &arg)
{
	std::cout << arg << "\n";
}
*/

#include <cstdlib>

int	main(void)
{
	{
		int			arr_int[] = {10, 42, 100 ,9, 5, 78};
        float       arr_float[] = {.1, .2, .3, .4, .5};
		std::string arr_str[] = {"Super", "bas bravo nils"};

        std::cout << "Iter on int\n";
		iter(arr_int, 6, print_value<int>);
		std::cout << "\n";
		iter(arr_int, 6, print_value<int>);
		std::cout << "\n";
		iter(arr_int, 6, print_value<int>);
		std::cout << "\n";
        std::cout << "Iter on string\n";
		iter(arr_str, 2, print_value<std::string>);
		std::cout << "\n";
        std::cout << "Iter on char\n";
		iter(&arr_str[0][0], arr_str[0].length(), print_value<char>);
		std::cout << "\n";
		iter(&arr_str[1][0], arr_str[1].length(), print_value<char>);
		std::cout << "\n";
        std::cout << "Iter on float\n";
        iter(arr_float, 4, print_value<float>);
	}
	{
		const int			arr_int[] = {10, 42, 100 ,9, 5, 78};
        const float       arr_float[] = {.1, .2, .3, .4, .5};
		const std::string arr_str[] = {"Super", "bas bravo nils"};

        std::cout << "Iter on int\n";
		iter(arr_int, 6, print_value<const int>);
		std::cout << "\n";
		iter(arr_int, 6, print_value<const int>);
		std::cout << "\n";
		iter(arr_int, 6, print_value<const int>);
		std::cout << "\n";
        std::cout << "Iter on string\n";
		iter(arr_str, 2, print_value<const std::string>);
		std::cout << "\n";
        std::cout << "Iter on char\n";
		iter(&arr_str[0][0], arr_str[0].length(), print_value<const char>);
		std::cout << "\n";
		iter(&arr_str[1][0], arr_str[1].length(), print_value<const char>);
		std::cout << "\n";
        std::cout << "Iter on float\n";
        iter(arr_float, 5, print_value<const float>);
	}
	return 0;
}
