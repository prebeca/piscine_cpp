/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:26:45 by user42            #+#    #+#             */
/*   Updated: 2021/08/19 12:54:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void testAnimal(void)
{
	std::cout << "Animals" << std::endl;
	const Animal meta;
	const Animal* morph = new Animal(meta);
	std::cout << "Animal meta; -> "  << meta << ", he says : ";
	meta.makeSound();
	std::cout << "Animal* morph = new Animal(meta); -> "  << *morph << ", he says : ";
	morph->makeSound();
	std::cout << std::endl;
	delete morph;

	std::cout << "Cats" << std::endl;
	const Cat a;
	const Animal* b = new Cat(a);
	std::cout << "Cat a; -> "  << a << ", he says : ";
	a.makeSound();
	std::cout << "Animal* b = new Cat(a); -> "  << *b << ", he says : ";
	b->makeSound();
	std::cout << std::endl;
	delete b;

	std::cout << "Dogs" << std::endl;
	const Dog i;
	const Animal* j = new Dog(i);
	std::cout << "Dog i; -> "  << i << ", he says : ";
	i.makeSound();
	std::cout << "Animal* j = new Dog(i); -> "  << *j << ", he says : ";
	j->makeSound();
	std::cout << std::endl;
	delete j;
}

void testWrongAnimal(void)
{
	std::cout << "WrongAnimals" << std::endl;
	const WrongAnimal meta;
	const WrongAnimal* morph = new WrongAnimal(meta);
	std::cout << "WrongAnimal meta; -> "  << meta << ", he says : ";
	meta.makeSound();
	std::cout << "WrongAnimal* morph = new WrongAnimal(meta); -> "  << *morph << ", he says : ";
	morph->makeSound();
	std::cout << std::endl;
	delete morph;

	std::cout << "WrongCats" << std::endl;
	const WrongCat a;
	const WrongAnimal* b = new WrongCat(a);
	std::cout << "WrongCat a; -> "  << a << ", he says : ";
	a.makeSound();
	std::cout << "WrongAnimal* b = new WrongCat(a); -> "  << *b << ", he says : ";
	b->makeSound();
	std::cout << std::endl;
	delete b;
}

int main(void)
{
	testAnimal();
	std::cout << std::endl;
	testWrongAnimal();
	return (0);
}