/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:48:35 by nlaporte          #+#    #+#             */
/*   Updated: 2026/01/29 18:19:59 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>

Phonebook::Phonebook(void) : count{ 0 }, print_all{ 0 }
{
}

int		Phonebook::isprint(std::string str)
{
	int	i;

	i = 0;
	while (i < str.length())
		if (str[i] < 32 || str[i++] > 126)
			return 0;
	return 1;
}

int		Phonebook::isnum(std::string str)
{
	int	i;

	i = 0;
	while (i < str.length())
		if (str[i] < 48 || str[i++] > 56)
			return 0;
	return 1;
}

std::string	Phonebook::getinput(std::string input_name)
{
	std::string	str;

	while (1)
	{
		std::cout << input_name << ": ";
		std::cin >> str;
		if (isprint(str))
			break;
		std::cout << "No printable character detected" << std::endl;
	}
	return str;
}

std::string	Phonebook::getid(std::string input_name)
{
	std::string	str;

	while (1)
	{
		std::cout << input_name << ": ";
		std::cin >> str;
		if (isnum(str))
			break;
		std::cout << "Only digits" << std::endl;
	}
	return str;
}

void	Phonebook::add(void)
{
	this->contact[this->count++ % 8] = Contact(getinput("Darkest secret"), getid("Phone number"), getinput("Nickname"), getinput("Last name"), getinput("First name"));
	if (this->count > 8)
		this->print_all = 1;
}

void	Phonebook::search(void)
{
	std::string	id_wanted;
	std::string	id;
	int			size;

	size = this->count % 8;
	if (this->print_all)
		size = 8;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|   ID     |FIRST_NAME|LAST_NAME | NICKNAME |" << std::endl;
	std::cout << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	for (int i = 0; i < size; i++)
		this->contact[i].print(true, i);
	while (1)
	{
		id = getid("ID wanted");
		if (id.length() == 1 && id[0] - '0' < size && id[0] - '0' >= 0)
			break;
		std::cout << "ID invalide" << std::endl;
	}
	this->contact[id[0] - '0'].print(false, 0);
}
