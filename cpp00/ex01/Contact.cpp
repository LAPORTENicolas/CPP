/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:05:21 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/09 19:32:01 by nlaporte         ###   ########.fr       */
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
{}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string number, std::string secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->number = number;
	this->secret = secret;
}

void	Contact::print(bool print_id, int id)
{
	if (print_id)
		std::cout << "|         " << id << "|" << format(first_name) << "|" << format(last_name) << "|" << format(nickname) << "|" << std::endl;
	else
		std::cout << "First name: " << first_name << std::endl << "Last name: " << last_name << std::endl << "Nickname: " << nickname << std::endl << "Phone number: " << number << std::endl << "Darkest secret: " << secret << std::endl;
}

int	valide_string(std::string str)
{
	unsigned long int	i;

	i = -1;
	while (++i < str.length())
		if (static_cast<int>(str[i]) < 33 || static_cast<int>(str[i]) > 126)
			return 0;
	return 1;
}

int	main()
{
	Phonebook	phonebook;

	std::string	cmd;
	while (1)
	{
		std::cout << "Phonebook> ";
		std::getline(std::cin, cmd);
		if (std::cin.eof() || cmd == "EXIT")
		{
			std::cout << "\nexit" << std::endl;
			return 0;
		}
		else if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else
			std::cout << "Command not recognized" << std::endl;
	}
	return 0;
}
