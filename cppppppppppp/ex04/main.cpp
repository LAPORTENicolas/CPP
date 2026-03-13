/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:32:14 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/13 07:44:58 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include <errno.h>


int	manage_ifstream(const char *in_path, std::ifstream *in)
{
	std::string		err;

	errno = 0;
	in->open(in_path);
	if (in->is_open())
		return 0;
	std::cout << "(Infile errno " << errno << ") Error can't use file " << in_path <<  std::endl;
	return 1;
}

int	manage_ofstream(std::string out_path, std::ofstream *out)
{
	std::string		err;
	std::string		new_file = out_path.append(".replace");

	out->open(new_file.c_str());
	if (out->is_open())
		return 1;
	std::cout << "(Outfile) Error can't use file " << out_path << std::endl;
	return 0;
}

void	find_occurence(std::string *buf, std::string s1, std::string s2)
{
	int			code = -1;

	while (((code = buf->find(s1, code + 1)) >= 0))
	{
		std::cout << "MDR" << std::endl;
		buf->erase(code, s1.length());
		buf->insert(code, s2);
	}
}

int	main(int ac, char **av)
{
	std::ifstream	in;
	std::ofstream	out;
	std::string		buf;

	if (ac != 4)
		return (std::cout << "Need 3 args Filename, s1 and s2" << std::endl, 0);
	if (manage_ifstream(av[1], &in) & 1)
		return (0);
	if (!manage_ofstream(av[1], &out))
		return (in.close(), 0);
	while (std::getline(in, buf))
	{
		find_occurence(&buf, av[2], av[3]);
		out << buf << '\n';
	}
	in.close();
	out.close();
	return 0;
}
