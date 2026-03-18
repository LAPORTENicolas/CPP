/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:25:21 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/18 13:57:30 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	void		highFivesGuys(void);

	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &obj);
		~FragTrap();
		FragTrap	&operator=(const FragTrap &obj);
};
