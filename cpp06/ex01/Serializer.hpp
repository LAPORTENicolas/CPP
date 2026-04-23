/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:23:51 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/23 19:41:45 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>

typedef struct s_data
{
	int val;
} Data;

class Serializer
{
	Serializer();
	Serializer(const Serializer &obj);
	~Serializer();
	Serializer &operator=(const Serializer &obj);
	
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data		*deserialize(uintptr_t raw);
};
