/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:55:13 by merlich           #+#    #+#             */
/*   Updated: 2022/10/30 22:33:36 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <string>
#include <iostream>
#include <limits.h>

# define CHAR		101
# define INT		102
# define FLOAT		103
# define DOUBLE		104
# define UNKNOWN	-1

/* checkers.cpp */

int	checkChar(std::string str);
int	checkInt(std::string str);
int	checkFloat(std::string str);
int	checkDouble(std::string str);
int	checkPseudo(std::string str);

/* converters.cpp */

void	displayResult(std::string str, int type);
void	convertChar(std::string str);
void	convertInt(std::string str);
void	convertFloat(std::string str);
void	convertDouble(std::string str);

/* main.cpp */

int	checkInput(int argc);
int	detectType(std::string str);
int	checkIsPrintable(char c);

#endif
