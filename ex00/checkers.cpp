/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:53:35 by merlich           #+#    #+#             */
/*   Updated: 2022/10/31 00:04:15 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int	checkChar(std::string str)
{
	return (str.length() == 1 && !(str[0] >= '0' && str[0] <= '9'));
}

int	checkInt(std::string str)
{
	size_t	i = 0;

	if (str[0] != '+' && str[0] != '-' && !isdigit(str[0]))
		return (false);
	if ((str[0] == '+' || str[0] == '-') && str.length() == 1)
		return (false);
	for (i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

int	checkFloat(std::string str)
{
	size_t	i = 0;
	int	point = 0;

	if (str[0] != '+' && str[0] != '-' && !isdigit(str[0]))
		return (false);
	if ((str[0] == '+' || str[0] == '-') && str.length() == 1)
		return (false);
	for (i = 1; i < str.length() - 1; i++)
	{
		if (!isdigit(str[i]))
		{
			if (str[i] != '.')
				return (false);
			if (point || !isdigit(str[i - 1]))
				return (false);
			else
				point++;
		}
	}
	if (str[i] != 'f')
		return (false);
	return (true);
}

int	checkDouble(std::string str)
{
	size_t	i = 0;
	int	point = 0;

	if (str[0] != '+' && str[0] != '-' && !isdigit(str[0]))
		return (false);
	if ((str[0] == '+' || str[0] == '-') && str.length() == 1)
		return (false);
	for (i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (str[i] != '.')
				return (false);
			if (point || !isdigit(str[i - 1]))
				return (false);
			else
				point++;
		}
	}
	return (true);
}

int	checkPseudo(std::string str)
{
	if (!str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
		return (DOUBLE);
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
		return (FLOAT);
	return (UNKNOWN);
}
