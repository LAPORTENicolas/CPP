/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:48:35 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/09 19:35:34 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <ios>
#include <iostream>

Phonebook::Phonebook(void)
{
	this->count = 0;
	this->print_all = 0;
}

int		Phonebook::isnum(std::string str)
{
	long unsigned int i;

	i = 0;
	while (i < str.length())
		if (str[i] < 48 || str[i++] > 57)
			return 0;
	return 1;
}

int		Phonebook::valide_string(std::string str)
{
	long unsigned int	i;
	bool				is_ok = false;

	i = -1;
	while (++i < str.length())
		if ((str[i] < 33 || str[i] > 126) && str[i] != ' ')
			return 0;
		else if (str[i] != ' ')
			is_ok = true;
	if (is_ok)
		return 1;
	return 0;
}

std::string	Phonebook::getinput(std::string input_name)
{
	std::string	str;
	std::cout << input_name << ":";
	while (1)
	{
		if (!std::getline(std::cin, str))
		{
			std::cout << "EOF" << std::endl;
			return "";
		}
		if (!Phonebook::valide_string(str))
			std::cout << "String is not valide\n" << input_name << ":";
		else if (str.length() >= 1)
			break;
		
	}
	return str;
}

std::string	Phonebook::getid(std::string input_name)
{
	std::string	str;
	std::cout << input_name << ":";
	while (1)
	{
		if (!std::getline(std::cin, str))
			return "";
		if (!Phonebook::isnum(str))
			std::cout << "Only digits\n" << input_name << ":";
		else if (str.length() >= 1)
			break;
		
	}
	return str;
}

void	Phonebook::add(void)
{
	std::cin.clear();
	std::string last = getinput("Last name");
	if (last == "")
		return ;
	std::string first = getinput("First name");
	if (first == "")
		return ;
	std::string nick = getinput("Nickname");
	if (nick == "")
		return ;
	std::string num = getid("Phone number");
	if (num == "")
		return ;
	std::string secret = getinput("Darkest secret");
	if (secret == "")
		return ;
	this->contact[this->count++ % 8] = Contact(first, last, nick, num, secret);
	if (this->count > 8)
		this->print_all = 1;
}

void	Phonebook::search(void)
{
	std::string	id_wanted;
	std::string	id;
	int			size;

	if (count <= 0)
	{
		std::cout << "Phonebook empty !" << std::endl;
		return ;
	}
	size = this->count % 8;
	if (this->count >= 8)
		size = 8;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|   ID     |FIRST_NAME|LAST_NAME | NICKNAME |" << std::endl;
	std::cout << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	for (int i = 0; i < size; i++)
		this->contact[i].print(true, i);
	while (1)
	{
		id = getid("ID wanted");
		if ((id.length() == 1 && id[0] - '0' < size && id[0] - '0' >= 0) || id == "")
			break;
		std::cout << "ID invalide" << std::endl;
	}
	this->contact[id[0] - '0'].print(false, 0);
}
