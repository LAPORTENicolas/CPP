/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:28:56 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 02:07:49 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		return 0;
	}
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << "\n\nTEST" << std::endl;
	std::cout << "\t" << a << " < " << b << " = " << (a < b) << std::endl;
	std::cout << "\t" << b << " < " << b << " = " << (b < b) << std::endl;
	std::cout << "\t" << c << " < " << a << " = " << (c < a) << std::endl;
	std::cout << "\t" << d << " < " << a << " = " << (d < a) << std::endl;
	std::cout << "\t" << b << " < " << a << " = " << (b < a) << "\n" << std::endl;
	
	std::cout << "\t" << a << " <= " << b << " = " << (a <= b) << std::endl;
	std::cout << "\t" << b << " <= " << b << " = " << (b <= b) << std::endl;
	std::cout << "\t" << c << " <= " << a << " = " << (c <= a) << std::endl;
	std::cout << "\t" << d << " <= " << a << " = " << (d <= a) << std::endl;
	std::cout << "\t" << b << " <= " << a << " = " << (b <= a) <<  "\n" << std::endl;

	std::cout << "\t" << a << " > " << b << " = " << (a > b) << std::endl;
	std::cout << "\t" << b << " > " << b << " = " << (b > b) << std::endl;
	std::cout << "\t" << c << " > " << a << " = " << (c > a) << std::endl;
	std::cout << "\t" << d << " > " << a << " = " << (d > a) << std::endl;
	std::cout << "\t" << b << " > " << a << " = " << (b > a) <<  "\n" << std::endl;

	std::cout << "\t" << a << " >= " << b << " = " << (a >= b) << std::endl;
	std::cout << "\t" << b << " >= " << b << " = " << (b >= b) << std::endl;
	std::cout << "\t" << c << " >= " << a << " = " << (c >= a) << std::endl;
	std::cout << "\t" << d << " >= " << a << " = " << (d >= a) << std::endl;
	std::cout << "\t" << b << " >= " << a << " = " << (b >= a) <<  "\n" << std::endl;

	std::cout << "\t" << a << " == " << b << " = " << (a == b) << std::endl;
	std::cout << "\t" << b << " == " << b << " = " << (b == b) << std::endl;
	std::cout << "\t" << c << " == " << a << " = " << (c == a) << std::endl;
	std::cout << "\t" << d << " == " << a << " = " << (d == a) << std::endl;
	std::cout << "\t" << b << " == " << a << " = " << (b == a) <<  "\n" << std::endl;

	std::cout << "\t" << a << " != " << b << " = " << (a != b) << std::endl;
	std::cout << "\t" << b << " != " << b << " = " << (b != b) << std::endl;
	std::cout << "\t" << c << " != " << a << " = " << (c != a) << std::endl;
	std::cout << "\t" << d << " != " << a << " = " << (d != a) << std::endl;
	std::cout << "\t" << b << " != " << a << " = " << (b != a) <<  "\n" << std::endl;


	std::cout << "\n" << std::endl;

	std::cout << "\t" << a << " + " << b << " = " << (a + b) << std::endl;
	std::cout << "\t" << b << " + " << b << " = " << (b + b) << std::endl;
	std::cout << "\t" << c << " + " << a << " = " << (c + a) << std::endl;
	std::cout << "\t" << d << " + " << a << " = " << (d + a) << std::endl;
	std::cout << "\t" << b << " + " << a << " = " << (b + a) <<  "\n" << std::endl;

	std::cout << "\t" << a << " - " << b << " = " << (a - b) << std::endl;
	std::cout << "\t" << b << " - " << b << " = " << (b - b) << std::endl;
	std::cout << "\t" << c << " - " << a << " = " << (c - a) << std::endl;
	std::cout << "\t" << d << " - " << a << " = " << (d - a) << std::endl;
	std::cout << "\t" << b << " - " << a << " = " << (b - a) <<  "\n" << std::endl;

	std::cout << "\t" << a << " * " << b << " = " << (a * b) << std::endl;
	std::cout << "\t" << b << " * " << b << " = " << (b * b) << std::endl;
	std::cout << "\t" << c << " * " << a << " = " << (c * a) << std::endl;
	std::cout << "\t" << d << " * " << a << " = " << (d * a) << std::endl;
	std::cout << "\t" << b << " * " << a << " = " << (b * a) <<  "\n" << std::endl;

	std::cout << "\t" << a << " / " << b << " = " << (a / b) << std::endl;
	std::cout << "\t" << b << " / " << b << " = " << (b / b) << std::endl;
	std::cout << "\t" << c << " / " << a << " = " << (c / a) << std::endl;
	std::cout << "\t" << d << " / " << a << " = " << (d / a) << std::endl;
	std::cout << "\t" << b << " / " << a << " = " << (b / a) <<  "\n" << std::endl;

	Fixed z;
	std::cout << z << std::endl;
	std::cout << "pre-incr" << ++z << std::endl;
	std::cout << z << std::endl;
	std::cout << "post-incr" << z++ << std::endl;
	std::cout << z << std::endl << "====" << "\n";
	std::cout << z << std::endl;
	std::cout << "pre-decr" << --z << std::endl;
	std::cout << z << std::endl;
	std::cout << "post-decr" << z-- << std::endl;
	std::cout << z << std::endl;
	std::cout << "min " << a << " ou " << b << " = " << Fixed::min(a, (Fixed&)b) << std::endl;
	std::cout << "min " << a << " ou " << b << " = " << Fixed::min((const Fixed&)a, (const Fixed&)b) << std::endl;
	std::cout << "max " << a << " ou " << b << " = " << Fixed::max(a, (Fixed&)b) << std::endl;
	std::cout << "max " << a << " ou " << b << " = " << Fixed::max((const Fixed&)a, (const Fixed&)b) << std::endl;

	std::cout << "ll =" << a / 0 << std::endl;
	return 0;
}

/*
int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
	*/
