/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:34:45 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 20:40:00 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <ostream>

class Fixed
{
	static const int	_fractional = 8;
	int					_fixed_val;

	public:
		Fixed();
		Fixed(int num);
		Fixed(float num);
		Fixed(const Fixed &obj);
		~Fixed();
		Fixed				&operator=(const Fixed &obj);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;
};

std::ostream &operator<<(std::ostream &ost, const Fixed &obj);
