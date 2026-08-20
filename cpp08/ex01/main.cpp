/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:42:43 by nlaporte          #+#    #+#             */
/*   Updated: 2026/08/19 20:55:22 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>

#define CNT_SIZE 10

int	main(void)
{
	Span tmp(0);
	{
		Span s(CNT_SIZE);
		std::srand(std::time(NULL));
		for (int i=0; i<CNT_SIZE; i++)
		{
			try
			{
				s.addNumber(std::rand() % 100);
			}
			catch (const std::exception &err) {
				std::cout << err.what() << "\n";
			}
		}
		std::cout << "shortest: " << s.shortestSpan() << "\n";
		std::cout << "longest: " << s.longestSpan() << "\n";
		tmp = s;
	}
	std::cout << "shortest: " << tmp.shortestSpan() << "\n";
	std::cout << "longest: " << tmp.longestSpan() << "\n";
	{
		Span s(3);
		int range[3] = {10, 1, 8};
		s.addRange(range, 3);
		std::cout << "shortest: " << s.shortestSpan() << "\n";
		std::cout << "longest: " << s.longestSpan() << "\n";
	}
	return 0;
}
