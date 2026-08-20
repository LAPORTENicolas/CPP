/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 21:56:53 by nlaporte          #+#    #+#             */
/*   Updated: 2026/08/07 10:53:05 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_TPP__
#define _EASYFIND_TPP__

#include <stdexcept>
#include <vector>

template <typename T>
int	easyfind(const std::vector<T> &vec, int find)
{
	std::vector<int>::const_iterator	ite;

    //TODO: remove
    int count = 0;
	for (ite = vec.begin(); ite < vec.end(); ite++)
	{
		if (*ite == find)
    {
            std::cout << "count = " << count << "\n";
			return *ite;
        }
        count++;
	}
	throw std::runtime_error("no value");
}

#endif //_EASYFIND_TPP__
