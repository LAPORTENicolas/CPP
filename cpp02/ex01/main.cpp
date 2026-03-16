/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:28:56 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 00:55:43 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


int main(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42F );
	Fixed const d( b );
	a = Fixed( 1234.4321F );
	std::cout << "a is " << a << "\n";
	std::cout << "b is " << b << "\n";
	std::cout << "c is " << c << "\n";
	std::cout << "d is " << d << "\n";
	std::cout << "a is " << a.toInt() << " as integer\n";
	std::cout << "b is " << b.toInt() << " as integer\n";
	std::cout << "c is " << c.toInt() << " as integer\n";
	std::cout << "d is " << d.toInt() << " as integer\n";
	return 0;
}
