/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 20:00:03 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 20:15:42 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal &operator=(const WrongAnimal &obj);
		~WrongAnimal();
		const std::string	&getType() const;
		void		makeSound() const;
};
