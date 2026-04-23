/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:27:27 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/23 19:41:51 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{}

Serializer::Serializer(const Serializer &obj)
{
	(void)obj;
}

Serializer::~Serializer()
{}

Serializer &Serializer::operator=(const Serializer &obj)
{
	(void)obj;
	return *this;
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data		*Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
