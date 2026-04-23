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

#include <cmath>
#include <exception>
#include <iomanip>
#include <sstream>
#include <limits>
#include <iostream>

template <typename T>
ScalarConverter<T>::ScalarConverter()
{}

template <typename T>
ScalarConverter<T>::~ScalarConverter()
{}

template <typename T>
ScalarConverter<T>::ScalarConverter(const ScalarConverter &obj)
{}

template <typename T>
ScalarConverter<T> &ScalarConverter<T>::operator=(const ScalarConverter &obj)
{
	return *this;
}

template<typename T>
const char *ScalarConverter<T>::CharBadValue::what() const throw()
{
	return "char: Non displayable";
}

template<typename T>
const char *ScalarConverter<T>::CharImpossibleValue::what() const throw()
{
	return "char: impossible";
}

template<typename T>
const char *ScalarConverter<T>::IntBadValue::what() const throw()
{
	return "int: impossible";
}

template<>
char ScalarConverter<char>::convert(const std::string &str)
{
	if (str[0] >= '0' && str[0] <= '9')
	{
		std::stringstream ss(str);
		int c;
		ss >> c;
		if (c >= 40 && c <= 126)
			return static_cast<char>(c);
		throw ScalarConverter::CharBadValue();

	}
	else if (str.length() != 1)
		throw ScalarConverter::CharImpossibleValue();
	return static_cast<char>(str[0]);
}

template<>
int	ScalarConverter<int>::convert(const std::string &str)
{
	if (str[0] >= '0' && str[0] <= '9')
	{
		std::stringstream ss(str);
		int i;
		ss >> i;
		return i;

	}
	else if (str.length() != 1)
		throw ScalarConverter::IntBadValue();
	return static_cast<char>(str[0]);
}

template<>
float	ScalarConverter<float>::convert(const std::string &str)
{
	if (str[0] >= '0' && str[0] <= '9')
	{
		std::stringstream ss(str);
		float f;
		ss >> f;
		if (std::isnan(f))
			return std::numeric_limits<float>::quiet_NaN();
		if (std::isinf(f) && f < 0.f)
			return -std::numeric_limits<float>::infinity();
		if (std::isinf(f))
			return std::numeric_limits<float>::infinity();
		return f;
	}
	if (str == "nan")
		return std::numeric_limits<float>::quiet_NaN();
	if (str == "-inf")
		return -std::numeric_limits<float>::infinity();
	if (str == "+inf")
		return std::numeric_limits<float>::infinity();
	return 0.0f;
}

template<>
double ScalarConverter<double>::convert(const std::string &str)
{
	if (str[0] >= '0' && str[0] <= '9')
	{
		std::stringstream ss(str);
		double d;
		ss >> d;
		if (std::isnan(d))
			return std::numeric_limits<double>::quiet_NaN();
		if (std::isinf(d) && d < 0.f)
			return -std::numeric_limits<double>::infinity();
		if (std::isinf(d))
			return std::numeric_limits<double>::infinity();
		return d;
	}
	if (str == "nan")
		return std::numeric_limits<double>::quiet_NaN();
	if (str == "-inf")
		return -std::numeric_limits<double>::infinity();
	if (str == "+inf")
		return std::numeric_limits<double>::infinity();
	return 0.0f;
}

template <>
void	ScalarConverter<void>::convert(const std::string &str)
{
	try
	{
		char	c = ScalarConverter<char>::convert(str);
		std::cout << "char: '" << c << "'\n";
	}
	catch (const ScalarConverter::CharBadValue &err)
	{
		std::cout << "char: impossible\n";
	}
	catch (const std::exception &err)
	{
		std::cerr << err.what() << "\n";
	}
	try
	{
		int		i = ScalarConverter<int>::convert(str);
		std::cout << "int: " << i << "\n";
	}
	catch (const ScalarConverter::IntBadValue &err)
	{
		std::cout << "int: impossible\n";
	}
	catch (const std::exception &err)
	{
		std::cerr << err.what() << "\n";
	}
	std::cout << std::setprecision(1) << std::fixed;
	float	f = ScalarConverter<float>::convert(str);
	std::cout << "float: " << f << "f" << "\n";
	double	d = ScalarConverter<double>::convert(str);
	std::cout << "double: " << d << "\n";
}
