/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:44:44 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 21:28:43 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
		virtual ~Animal();
		const std::string	&getType() const;
		virtual void		makeSound() const = 0;
};
