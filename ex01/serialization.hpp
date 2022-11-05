/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:14:48 by merlich           #+#    #+#             */
/*   Updated: 2022/10/29 22:32:16 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef serialization_HPP
# define serialization_HPP

#include <iostream>
#include <string>

typedef struct s_data
{
	int			a;
	float		b;
	char		c;
	double		d;
	std::string	e;

}	Data;

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);
void		init_data(Data *ptr);
void		print_data(Data ptr);

#endif
