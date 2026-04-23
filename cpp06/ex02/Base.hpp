/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:49:14 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/23 20:11:12 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Base
{
	public:
		virtual ~Base();
		static Base	*generate(void);
		static void	identify(Base *p);
		static void	identify(Base &p);
};
