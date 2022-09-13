/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:01:24 by user42            #+#    #+#             */
/*   Updated: 2021/08/17 17:09:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructor/Destructor------------------------------------------------------

Dog::Dog(void): AAnimal("Dog"), brain(new Brain())
{
	std::cout << "A new Dog is created !" << std::endl;
}

Dog::Dog(const Dog & c): AAnimal("Dog"), brain(new Brain(*c.brain))
{
	std::cout << "A new Dog is copied !" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "A Dog is destroyed !" << std::endl;
}

// operator overload-----------------------------------------------------------

Dog & Dog::operator=(const Dog & rhs)
{
	this->type = rhs.getType();
	*this->brain = *rhs.brain;
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Dog & rhs)
{
	std::cout << "This Dog is a/an " << rhs.getType();
	return (os);
}

// getters/setters-------------------------------------------------------------

Brain & Dog::getBrain(void) const
{
	return (*this->brain);
}

// actions---------------------------------------------------------------------

void Dog::makeSound(void) const
{
	std::cout << "Wooof Woooof" << std::endl;
}
