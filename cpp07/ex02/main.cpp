/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:09:18 by nlaporte          #+#    #+#             */
/*   Updated: 2026/08/19 20:38:13 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <exception>
#include <iostream>

int	main(void)
{
	Array<int> a(10);
	Array<std::string> c(100);
	Array<std::string> cc(0);
	Array<float> d(1000);
	Array<double> test(0);

	std::cout << "Array size: " << a.size() << "\n";
	std::cout << "Array size: " << test.size() << "\n";
	std::cout << "Array: " << a[0] << "\n";
	std::cout << "Array: " << a[1] << "\n";

	try
	{
		std::cout << "Array: " << a[11] << "\n";
	}
	catch (const std::exception &err)
	{
		std::cout << err.what() << "\n";
	}

	try
	{
		std::cout << "Array: " << cc[1] << "\n";
	}
	catch (const std::exception &err)
	{
		std::cout << err.what() << "\n";
	}

	cc = c;
	std::cout << "cc size = " << cc.size() << "\n";

	try
	{
        cc[1] = "42";
		std::cout << "Array: " << cc[1] << "\n";
	}
	catch (const std::exception &err)
	{
		std::cout << err.what() << "\n";
	}

    try
    {
        std::cout << "cc[-2]\n";
        cc[-2] = "";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Array<int> test_empty(0);
    Array<int> test_empty1(1);
    Array<int> test_empty11(10000);
	return 0;
}
