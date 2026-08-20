/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 21:47:55 by nlaporte          #+#    #+#             */
/*   Updated: 2026/08/07 10:34:42 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template <typename T, typename F>
void	iter(T *ptr, const size_t length, F fun)
{
	for (size_t i=0;i<length;i++)
		fun(ptr[i]);
	return ;
}
