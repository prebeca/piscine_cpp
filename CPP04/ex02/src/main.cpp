/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:26:45 by user42            #+#    #+#             */
/*   Updated: 2021/08/19 13:15:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define NUMBER_OF_ANIMAL 10

int main(void)
{
	// AAnimal a; //not possible because AAnimal is abstract
	
	{// test if brain is freed
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();

		delete j;//should not create a leak
		delete i;
	}

	std::cout << std::endl;
	{// test if Dog is deep copied. if not deep copied, valgrind should warn about a double free
		const Dog* j = new Dog();
		const Dog* i = new Dog(*j);

		delete j;
		delete i;
	}

	std::cout << std::endl;
	{// test if Cat is deep copied. if not deep copied, valgrind should warn about a double free
		const Cat* j = new Cat();
		const Cat* i = new Cat(*j);

		delete j;
		delete i;
	}

	std::cout << std::endl;
	{// test if Cat is deep copied. if not deep copied, valgrind should warn about a double free
		Cat j;
		Cat i;

		i = j;
	}

	std::cout << std::endl;
	{// test if cat's and dog's destructors are called when deleting them as Animal
		AAnimal *a[NUMBER_OF_ANIMAL];
		int i;

		for (i = 0; i < NUMBER_OF_ANIMAL / 2; ++i)
		{
			a[i] = new Dog();
		}
		for (; i < NUMBER_OF_ANIMAL; ++i)
		{
			a[i] = new Cat();
		}
		for (i = 0; i < NUMBER_OF_ANIMAL; ++i)
		{
			delete a[i];
		}
	}

	return (0);
}