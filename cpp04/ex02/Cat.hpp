/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:45:50 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 20:34:44 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	Brain	*_brain;

	public:
		Cat();
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		~Cat();
		void	makeSound() const;
};
