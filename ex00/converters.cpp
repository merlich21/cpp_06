/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:51:05 by merlich           #+#    #+#             */
/*   Updated: 2022/10/31 00:05:03 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

void	displayResult(std::string str, int type)
{
	if (type == CHAR)
		convertChar(str);
	else if (type == INT)
		convertInt(str);
	else if (type == FLOAT)
		convertFloat(str);
	else if (type == DOUBLE)
		convertDouble(str);
	else
		std::cout << "Unknown type!" << std::endl;
}

void	convertChar(std::string str)
{
	if (!isprint(str[1]))
		std::cout << "char: " << static_cast<char>(str[0]) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(str[0]) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
}

void	convertInt(std::string str)
{
	double num = strtod(str.c_str(), NULL);

	if (num < 0.0 || num > 255.0)
		std::cout << "char: Overflow" << std::endl;
	else if (num < 32.0 || num > 126.0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(num) << std::endl;
	if (num > INT_MIN && num < INT_MAX)
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	else
		std::cout << "int: Overflow" << std::endl;
	std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void	convertFloat(std::string str)
{
	double num = strtod(str.c_str(), NULL);

	if (!str.compare("nanf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(num) << std::endl;
		return ;
	}
	if (num < 0.0 || num > 255.0)
		std::cout << "char: Overflow" << std::endl;
	else if (num < 32.0 || num > 126.0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(num) << std::endl;
	if (num > INT_MIN && num < INT_MAX)
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	else
		std::cout << "int: Overflow" << std::endl;
	std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void	convertDouble(std::string str)
{
	double num = strtod(str.c_str(), NULL);

	if (!str.compare("nan"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(num) << std::endl;
		return ;
	}
	if (num < 0.0 || num > 255.0)
		std::cout << "char: Overflow" << std::endl;
	else if (num < 32.0 || num > 126.0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(num) << std::endl;
	if (num > INT_MIN && num < INT_MAX)
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	else
		std::cout << "int: Overflow" << std::endl;
	std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}
