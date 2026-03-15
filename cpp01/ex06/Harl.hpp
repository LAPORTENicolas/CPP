/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 22:38:49 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/15 23:16:08 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Harl
{
	static void	debug(void);
	static void	info(void);
	static void	warning(void);
	static void	error(void);

	public:
		Harl();
		~Harl();
		static void	complain(const std::string &level);
};
