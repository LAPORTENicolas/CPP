/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:46:10 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 20:41:21 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;

	public:
		Dog();
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		~Dog();
		void	makeSound() const;
};
