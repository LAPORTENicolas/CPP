/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:32:14 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 20:15:33 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

namespace 
{
	void	manage_ifstream(const char *in_path, std::ifstream &in)
	{
		in.exceptions(std::ios_base::badbit | std::ios_base::failbit);
		try
		{
			in.open(in_path);
		}
		catch (std::ios_base::failure &e)
		{
			throw e;
		}
		in.exceptions(std::ios_base::goodbit);
	}

	void	manage_ofstream(const char *out_path, std::ofstream &out)
	{
		std::string	path = static_cast<std::string>(out_path);

		path.append(".replace");
		out.exceptions(std::ios_base::badbit | std::ios_base::failbit);
		try
		{
			out.open(path.c_str());
		}
		catch (const std::ios_base::failure &e)
		{
			throw e;
		}
		out.exceptions(std::ios_base::goodbit);
	}

	void	find_occurence(std::string &buf, const std::string &str1, const std::string &str2)
	{
		size_t	code = buf.find(str1);

		if (buf.length() <= 0 || str1.length() <= 0)
			return ;
		while (code != std::string::npos)
		{
			buf.erase(code, str1.length());
			buf.insert(code, str2);
			code = buf.find(str1, code + str2.length());
		}
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "Need 3 args Filename, s1 and s2\n", 0);
	
	std::ifstream	in;
	std::ofstream	out;
	std::string		buf;
	std::string		str1 = static_cast<std::string>(av[2]);
	std::string		str2 = static_cast<std::string>(av[3]);
	try
	{
		manage_ifstream(av[1], in);
		manage_ofstream(av[1], out);
	}
	catch (std::ios_base::failure &e)
	{
		std::cout << "Error: " << e.what() << "\n";
		return 0;
	}
	while (std::getline(in, buf))
	{
		find_occurence(buf, str1, str2);
		out << buf;
		if (!in.eof())
			out << "\n";
	}
	return 0;
}
