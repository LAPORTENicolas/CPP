/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:34:45 by nlaporte          #+#    #+#             */
/*   Updated: 2026/03/16 20:53:44 by nlaporte         ###   ########.fr       */
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
		Fixed				operator++(int);
		float				operator++(void);
		Fixed				operator--(int);
		float				operator--(void);
		bool				operator<(const Fixed &rhs) const;
		bool				operator<=(const Fixed &rhs) const;
		bool				operator>(const Fixed &rhs) const;
		bool				operator>=(const Fixed &rhs) const;
		bool				operator==(const Fixed &rhs) const;
		bool				operator!=(const Fixed &rhs) const;
		float				operator+(const Fixed &rhs) const;
		float				operator-(const Fixed &rhs) const;
		float				operator*(const Fixed &rhs) const;
		float				operator/(const Fixed &rhs) const;
		static Fixed		&min(Fixed &lhs, Fixed &rhs);
		static Fixed		&min(const Fixed &lhs, const Fixed &rhs);
		static Fixed		&max(Fixed &lhs, Fixed&);
		static Fixed		&max(const Fixed &lhs, const Fixed &rhs);
		int					toInt() const;
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
};

typedef struct s_vec2
{
	Fixed	x;
	Fixed	y;
}	t_vec2;

std::ostream	&operator<<(std::ostream &ost, const Fixed &obj);
