/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:28:56 by nlaporte          #+#    #+#             */
/*   Updated: 2026/02/20 15:07:26 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main()
{
	bool r = bsp(Point(1., 1.), Point(-1., -1), Point(0, 0), Point(.0, .0));
	if (r)
		std::cout << "Dedans" << std::endl;
	else
		std::cout << "Pas dedans" << std::endl;

	r = bsp(Point(2, 0), Point(-2., 0), Point(0, 2), Point(.5, .5));
	if (r)
		std::cout << "Dedans" << std::endl;
	else
		std::cout << "Pas dedans" << std::endl;
	r = bsp(Point(2, 0), Point(-2., 0), Point(0, 2), Point(1.5, 1.5));
	if (r)
		std::cout << "Dedans" << std::endl;
	else
		std::cout << "Pas dedans" << std::endl;

	r = bsp(Point(10, 0), Point(5, 2), Point(6, -4), Point(.5, .5));
	if (r)
		std::cout << "Dedans" << std::endl;
	else
		std::cout << "Pas dedans" << std::endl;

	r = bsp(Point(10, 0), Point(5, 2), Point(6, -4), Point(7., .5));
	if (r)
		std::cout << "Dedans" << std::endl;
	else
		std::cout << "Pas dedans" << std::endl;
	return 0;
}
