/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <nlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 07:23:59 by nlaporte          #+#    #+#             */
/*   Updated: 2026/04/22 15:26:43 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <cctype>
#include <cfloat>
#include <cstdlib>
#include <inttypes.h>
#include <cmath>
#include <exception>
#include <iomanip>
#include <ios>
#include <limits>
#include <stdlib.h>
#include <sstream>
#include <limits.h>
#include <iostream>
#include <string>

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	(void)obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void)obj;
	return *this;
}

const char *ScalarConverter::CharBadValue::what() const throw()
{
	return "char: Non displayable";
}

const char *ScalarConverter::CharImpossibleValue::what() const throw()
{
	return "char: impossible";
}

const char *ScalarConverter::IntBadValue::what() const throw()
{
	return "int: impossible";
}

double	get_val(const std::string &str)
{
	double	r = 0.f;

	if (str == "inf" || str == "inff" || str == "+inf" || str == "+inff")
		return std::numeric_limits<double>::infinity();
	if (str == "-inf" || str == "-inff")
		return -std::numeric_limits<double>::infinity();
	if (str == "nan" || str == "nanf")
		return std::numeric_limits<double>::quiet_NaN();
	if (std::isdigit(str[0]) || str[0] == '-')
	{
		char	*ptr;
		r = std::strtod(&str[0], &ptr);
		if (ptr != &str[str.length()])
			return std::numeric_limits<double>::quiet_NaN();
	}
	else if (str.length() == 1)
		r = static_cast<int>(str[0]);
	else
		return std::numeric_limits<double>::quiet_NaN();
	return r;
}

void	ScalarConverter::convert(const std::string &str)
{
	double	r = get_val(str);
	
	std::cout << r  << "\n";
	if (std::isnan(r))
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: nanf\n";
		std::cout << "double: nan\n";
		return ;
	}
	if (r > 0 && r < 255 && std::isprint(r))
		std::cout << "char: " << static_cast<char>(r) << "\n";
	else
		std::cout << "char: Non displayable\n";

	if (r == std::numeric_limits<double>::infinity())
	{
		std::cout << "char: Non displayable\n";
		std::cout << "int: +inf\n";
		std::cout << "float: +inff\n";
		std::cout << "double: +inf\n";
		return ;
	}
	else if (r == -std::numeric_limits<double>::infinity())
	{
		std::cout << "char: Non displayable\n";
		std::cout << "int: -inf\n";
		std::cout << "float: -inff\n";
		std::cout << "double: -inf\n";
		return ;
	}

	std::cout << std::setprecision(1) << std::fixed;
	if (r > INT_MAX || r < INT_MIN)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(r) << "\n";

	if (r > FLT_MAX || r < -FLT_MAX)
		std::cout << "float: impossible\n";
	else
		std::cout << "float: " << static_cast<float>(r) << "f\n";

	std::cout << "double: " << r << "\n";
}
