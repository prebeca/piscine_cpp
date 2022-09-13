/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:30:52 by user42            #+#    #+#             */
/*   Updated: 2021/08/16 17:55:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor/Destructor------------------------------------------------------

Cat::Cat(void): Animal("Cat"), brain(new Brain())
{
	std::cout << "A new Cat is created !" << std::endl;
}

Cat::Cat(const Cat & c): Animal(c.type), brain(new Brain(*c.brain))
{
	std::cout << "A new Cat is created by copy !" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "A Cat is deleted !" << std::endl;
}

// operator overload-----------------------------------------------------------

Cat & Cat::operator=(const Cat & rhs)
{
	this->type = rhs.getType();
	*this->brain = *rhs.brain;
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Cat & rhs)
{
	std::cout << "This Cat is a/an " << rhs.getType();
	return (os);
}

// getters/setters-------------------------------------------------------------

Brain & Cat::getBrain(void) const
{
	return (*this->brain);
}

// actions---------------------------------------------------------------------

void Cat::makeSound(void) const
{
	std::cout << "Meeoow Meeoow" << std::endl;
}
