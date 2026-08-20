/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:28:00 by nlaporte          #+#    #+#             */
/*   Updated: 2026/08/19 20:33:49 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}

/*
int	main(void)
{
	int a = 10, b = 12;
	char ca = 'a', cb = 'f';

	std::cout << "A = " << a << ", B = " << b << "\n";
	std::cout << "min = " << min(a, b) << "\n";
	std::cout << "max = " << max(a, b) << "\n";
	std::cout << "swap a and b\n";
	swap(&a, &b);
	std::cout << "A = " << a << ", B = " << b << "\n\n";

	std::cout << "A = " << ca << ", B = " << cb << "\n";
	std::cout << "min = " << min(ca, cb) << "\n";
	std::cout << "max = " << max(ca, cb) << "\n";
	std::cout << "swap a and b\n";
	swap(&ca, &cb);
	std::cout << "A = " << ca << ", B = " << cb << "\n";
	return 0;
}
*/
