/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:30:52 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 13:30:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Constructor/Destructor------------------------------------------------------

AAnimal::AAnimal(void): type("unknown type")
{
	std::cout << "A new AAnimal is created !" << std::endl;
}

AAnimal::AAnimal(std::string type): type(type)
{
	std::cout << "A new AAnimal is created !" << std::endl;
}

AAnimal::AAnimal(const AAnimal & c): type(c.type)
{
	std::cout << "A new AAnimal is copied !" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "An AAnimal is destroyed !" << std::endl;
}

// operator override-----------------------------------------------------------

AAnimal & AAnimal::operator=(const AAnimal & rhs)
{
	this->type = rhs.getType();
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const AAnimal & rhs)
{
	(void)rhs;
	std::cout << "This AAnimal is a/an " << rhs.getType();
	return (os);
}

// getters setters-------------------------------------------------------------

std::string AAnimal::getType(void) const
{
	return (this->type);
}
