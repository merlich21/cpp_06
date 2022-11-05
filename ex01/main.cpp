/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:01:30 by merlich           #+#    #+#             */
/*   Updated: 2022/10/29 23:03:11 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	num;
	
	num = reinterpret_cast<uintptr_t>(ptr);
	return num;
}

Data	*deserialize(uintptr_t raw)
{
	Data	*ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return ptr;
}

void	print_data(Data ptr)
{
	std::cout << std::endl;
	std::cout << "Value a: " << ptr.a << std::endl;
	std::cout << "Value b: " << ptr.b << std::endl;
	std::cout << "Value c: " << ptr.c << std::endl;
	std::cout << "Value d: " << ptr.d << std::endl;
	std::cout << "Value e: " << ptr.e << std::endl;
	std::cout << std::endl;
}

void	init_data(Data *ptr)
{
	ptr->a = 42;
	ptr->b = 21.012f;
	ptr->c = 'c';
	ptr->d = 42.024;
	ptr->e = "my_string";
}

int	main( void )
{
	Data		s;
	Data		*res = NULL;
	uintptr_t	u_ptr = 0;

	init_data(&s);
	print_data(s);
	std::cout << "structure address: " << &s << std::endl;

	u_ptr = serialize(&s);
	std::cout << "uintptr_t address: " << &u_ptr << std::endl;
	std::cout << "uintptr_t value: " << u_ptr << std::endl;
	res = deserialize(u_ptr);

	print_data(*res);
	std::cout << "Res structure address: " << res << std::endl;

	return 0;
}


