/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:09:23 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/24 09:39:11 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template<typename T>
class Array
{
	T				*_arr;
	unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		~Array();
		Array	&operator=(const Array &obj);
		T	&operator[](unsigned int i);
		unsigned int size() const;
};

#include "Array.tpp"
