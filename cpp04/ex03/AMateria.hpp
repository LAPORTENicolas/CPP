/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:55:33 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/19 21:44:33 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string	_name;

	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &obj);
		virtual ~AMateria();
		AMateria			&operator=(const AMateria &obj);
		const std::string	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target) = 0;
};
