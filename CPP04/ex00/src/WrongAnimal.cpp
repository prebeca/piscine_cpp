/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:13:55 by user42            #+#    #+#             */
/*   Updated: 2021/08/19 12:50:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructor/Destructor------------------------------------------------------

WrongAnimal::WrongAnimal(void): type("unknown type")
{
	std::cout << "A new Animal is created !" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << "A new Animal of type " << this->type << " is created !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & c): type(c.type)
{
	std::cout << "A new Animal is created by copy !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "An Animal is deleted !" << std::endl;
}

// operator overload-----------------------------------------------------------

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & rhs)
{
	this->type = rhs.getType();
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const WrongAnimal & rhs)
{
	(void)rhs;
	std::cout << "This WrongAnimal is a/an " << rhs.getType();
	return (os);
}

// getters setters-------------------------------------------------------------

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

// actions---------------------------------------------------------------------

void WrongAnimal::makeSound(void) const
{
	std::cout << "unknown sound" << std::endl;
}
