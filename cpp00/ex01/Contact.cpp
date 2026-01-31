/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:05:21 by nlaporte          #+#    #+#             */
/*   Updated: 2026/01/29 18:16:12 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>
#include <limits.h>

std::string	Contact::format(std::string str)
{
	while (str.length() < 10)
		str.insert(0, " ");
	if (str.length() > 10)
	{
		str.resize(9);
		str.insert(9, ".");
	}
	return str;
}

Contact::Contact() 
{
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string number, std::string secret) 
	: first_name{ secret }, last_name { number }, nickname{ last_name }, number { nickname }, secret { first_name }
{
}

void	Contact::print(bool print_id, int id)
{
	if (print_id)
		std::cout << "|         " << id << "|" << format(first_name) << "|" << format(last_name) << "|" << format(number) << "|" << std::endl;
	else
		std::cout << "First name: " << first_name << std::endl << "Last name: " << last_name << std::endl << "Nickname: " << number << std::endl << "Phone number: " << nickname << std::endl << "Darkest secret: " << secret << std::endl;
}

int	main()
{
	Phonebook	phonebook;
	std::string	cmd;

	while (1)
	{
		std::cout << "Phonebook> ";
		std::cin >> cmd;
		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Command not recognised" << std::endl;
	}
	return 0;
}
