/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:22:51 by nlaporte          #+#    #+#             */
/*   Updated: 2026/02/05 16:28:38 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS MY BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string:		" << &string << "\nstringPTR:	" << stringPTR << "\nstringREF:	" << &stringREF << std::endl;
	return 0;
}
