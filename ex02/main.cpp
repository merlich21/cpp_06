/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 23:04:19 by merlich           #+#    #+#             */
/*   Updated: 2022/10/30 00:06:45 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate( void )
{
	Base	*ptr = NULL;
	srand(time(NULL));
	int		r = rand() % 3;

	if (r == 0)
	{
		ptr = new A();
		std::cout << "*** Object of type A is created ***" << std::endl << std::endl;
	}
	else if (r == 1)
	{
		ptr = new B();
		std::cout << "*** Object of type B is created ***" << std::endl << std::endl;
	}
	else
	{
		ptr = new C();
		std::cout << "*** Object of type C is created ***" << std::endl << std::endl;
	}
	return ptr;
}

void	identify( Base *p )
{
	if (dynamic_cast<A *>(p))
		std::cout << "The actual type of the object is A!" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "The actual type of the object is B!" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "The actual type of the object is C!" << std::endl;
}

void	identify( Base &p )
{

	try
	{
		A	&a = dynamic_cast<A &>(p);
		std::cout << "The actual type of the object is A!" << std::endl;
	}
	catch ( std::bad_cast & bc)
	{
		// std::cout << "The actual type of the object is NOT A!" << std::endl;
	}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		std::cout << "The actual type of the object is B!" << std::endl;
	}
	catch ( std::bad_cast & bc)
	{
		// std::cout << "The actual type of the object is NOT B!" << std::endl;
	}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		std::cout << "The actual type of the object is C!" << std::endl;
	}
	catch ( std::bad_cast & bc)
	{
		// std::cout << "The actual type of the object is NOT C!" << std::endl;
	}
}

int	main( void )
{
	Base	*b;

	b = generate();
	identify(b);
	identify(*b);
	delete b;
	return 0;
}
