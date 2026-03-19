/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 20:07:16 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/19 21:46:21 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	AMateria	*_inventory[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource	&operator=(const MateriaSource &obj);
		~MateriaSource();
		void			learnMateria(AMateria*);
		AMateria		*createMateria(const std::string &type);
};
