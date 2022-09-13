/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:30:52 by user42            #+#    #+#             */
/*   Updated: 2021/08/19 12:57:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructor/Destructor------------------------------------------------------

Animal::Animal(void): type("unknown type")
{
	std::cout << "A new Animal is created !" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "A new Animal of type " << this->type << " is created !" << std::endl;
}

Animal::Animal(const Animal & c): type(c.type)
{
	std::cout << "A new Animal is created by copy !" << std::endl;
}

Animal::~Animal()
{
	std::cout << "An Animal is deleted !" << std::endl;
}

// operator overload-----------------------------------------------------------

Animal & Animal::operator=(const Animal & rhs)
{
	this->type = rhs.getType();
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Animal & rhs)
{
	(void)rhs;
	std::cout << "This animal is a/an " << rhs.getType();
	return (os);
}

// getters setters-------------------------------------------------------------

std::string Animal::getType(void) const
{
	return (this->type);
}

// actions---------------------------------------------------------------------

void Animal::makeSound(void) const
{
	std::cout << "unknown sound" << std::endl;
}
