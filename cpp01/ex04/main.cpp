/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:32:14 by nlaporte          #+#    #+#             */
/*   Updated: 2026/02/11 13:00:01 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include <errno.h>


int	manage_ifstream(std::string in_path, std::ifstream *in)
{
	std::string		err;

	errno = 0;
	in->open(in_path);
	if (in->is_open())
		return 0;
	std::cout << "(Infile errno " << errno << ") Error can't use file " << in_path <<  " " << strerror(errno) << std::endl;
	return 1;
}

int	manage_ofstream(std::string out_path, std::ofstream *out)
{
	std::string		err;

	out->open(out_path.append(".replace"));
	if (out->is_open())
		return 1;
	std::cout << "(Outfile) Error can't use file " << out_path <<  ".replace " << strerror(errno) << std::endl;
	return 0;
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while ((unsigned char)s1[i] \
		&& (unsigned char)s1[i] == (unsigned char)s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i++]);
	return i - 1 < 0 ? 0 : i - 1;
}

void	find_occurence(std::string *buf, std::string s1, std::string s2)
{
	const char	*to_find;
	int			i;
	int			j;

	to_find = s1.c_str();
	i = 0;
	while (i <= ft_strlen(buf->c_str()) - ft_strlen(to_find))
	{
		if (ft_strncmp(buf->c_str() + i, to_find, ft_strlen(to_find)) == 0)
		{
			j = -1;
			while (++j < ft_strlen(to_find))
				(*buf)[i + j] = s2[j % ft_strlen(s2.c_str())];
			i += j;
		}
		else
			i++;
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
