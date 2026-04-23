/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:08:31 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/23 20:17:00 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base *ptr = Base::generate();
	Base &ref = *ptr;
	Base::identify(ptr);
	Base::identify(ref);
	return 0;
}
