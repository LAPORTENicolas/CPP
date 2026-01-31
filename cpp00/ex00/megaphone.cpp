/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:02:08 by nlaporte          #+#    #+#             */
/*   Updated: 2026/01/28 21:02:08 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int			i;

	i = 0;
	while (++i < ac)
	{
		for (int j = 0; j < ((std::string)av[i]).length(); j++)
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				std::cout << (char)(av[i][j] - 32);
			else
				std::cout << av[i][j];
	}
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
