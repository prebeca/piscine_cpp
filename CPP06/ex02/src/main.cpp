/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:56:10 by user42            #+#    #+#             */
/*   Updated: 2021/09/06 14:59:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include <stdlib.h>

Base * generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		std::cout << "A is generated" << std::endl;
		return (new A());
	case 1:
		std::cout << "B is generated" << std::endl;
		return (new B());
	case 2:
		
		std::cout << "C is generated" << std::endl;
		return (new C());
	}
	return (0);
}

void identify(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base & p)
{
	Base result;

	try
	{
		result = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			result = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				result = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Unknown type" << std::endl;
			}
		}
	}
}

int main()
{
	srand(time(NULL));

	Base * base = generate();

	identify(base);
	identify(*base);

	return (0);
}