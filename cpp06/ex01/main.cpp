/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:41:54 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/23 19:47:44 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data		a, b, *c, *d;
	uintptr_t	p_a, p_b;

	a.val = 10;
	b.val = 42;
	p_a = Serializer::serialize(&a);
	std::cout << reinterpret_cast<Data *>(p_a)->val << std::endl;
	p_b = Serializer::serialize(&b);
	std::cout << reinterpret_cast<Data *>(p_b)->val << std::endl;

	c = Serializer::deserialize(p_a);
	std::cout << c->val << std::endl;
	d = Serializer::deserialize(p_b);
	std::cout << d->val << std::endl;
	return 0;
}
