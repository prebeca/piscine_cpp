/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:30:52 by user42            #+#    #+#             */
/*   Updated: 2021/08/16 17:55:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructor/Destructor------------------------------------------------------

Dog::Dog(void): Animal("Dog"), brain(new Brain())
{
	std::cout << "A new Dog is created !" << std::endl;
}

Dog::Dog(const Dog & c): Animal(c.type), brain(new Brain(*c.brain))
{
	std::cout << "A new Dog is created by copy !" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "A Dog is deleted !" << std::endl;
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
