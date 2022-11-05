/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:01:30 by merlich           #+#    #+#             */
/*   Updated: 2022/10/31 00:06:07 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int	checkInput(int argc)
{
	if (argc != 2)
	{
		std::cout << "Error! Wrong input!" << std::endl;
		std::cout << "Example: " << std::endl;
		std::cout << "./convert 0" << std::endl;
		return (1);
	}
	return (0);
}

int	detectType(std::string str)
{
	if (checkChar(str))
		return (CHAR);
	else if (checkInt(str))
		return (INT);
	else if (checkFloat(str))
		return (FLOAT);
	else if (checkDouble(str))
		return (DOUBLE);
	else
		return (checkPseudo(str));
}

int	checkIsPrintable(char c)
{
	int	res = isprint(c);

	if (!res)
	{
		std::cout << "Error! Wrong input!" << std::endl;
		std::cout << "Non displayable characters shouldn`t be used as inputs!";
		std::cout << std::endl;
	}
	return (res);
}

int	main( int argc, char **argv )
{
	int	type;

	type = 0;
	if (checkInput(argc))
		return (1);
	type = detectType(argv[1]);
	if (type == CHAR && !checkIsPrintable(argv[1][0]))
		return (1);
	displayResult(argv[1], type);
	return 0;
}
