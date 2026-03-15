/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:22:51 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 23:37:31 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Adress\nstring:		" << &string << "\nstringPTR:	" << static_cast<const void *>(stringPTR) << "\nstringREF:	" << &stringREF << "\n\n";
	std::cout << "Value:\nstring:		" << string << "\nstringPTR:	" << *stringPTR << "\nstringREF:	" << stringREF << "\n";
	return 0;
}
