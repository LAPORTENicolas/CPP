/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 20:29:41 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 21:06:29 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain
{
	std::string _ideas[100];

	public:
		Brain();
		Brain(const Brain &obj);
		Brain &operator=(const Brain &obj);
		~Brain();
};
