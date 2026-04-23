/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 07:21:23 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/22 15:00:10 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <string>

template <typename T>
class ScalarConverter
{
	ScalarConverter();
	ScalarConverter(const ScalarConverter &obj);
	~ScalarConverter();
	ScalarConverter &operator=(const ScalarConverter &obj);

	public:
		class CharBadValue : public virtual std::exception
		{
			virtual const char *what() const throw();
		};
		class CharImpossibleValue : public virtual std::exception
		{
			virtual const char *what() const throw();
		};
		class IntBadValue : public virtual std::exception
		{
			virtual const char *what() const throw();
		};
		static T convert(const std::string &str);
};
