/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:15:43 by user42            #+#    #+#             */
/*   Updated: 2021/08/19 12:52:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructor/Destructor------------------------------------------------------

WrongCat::WrongCat(void): WrongAnimal("Cat")
{
	std::cout << "A new WrongCat is created !" << std::endl;
}

WrongCat::WrongCat(const WrongCat & c): WrongAnimal(c.type)
{
	std::cout << "A new WrongCat is created by copy !" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat is deleted !" << std::endl;
}

// operator overload-----------------------------------------------------------

WrongCat & WrongCat::operator=(const WrongCat & rhs)
{
	this->type = rhs.getType();
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const WrongCat & rhs)
{
	std::cout << "This WrongCat is a/an " << rhs.getType();
	return (os);
}

// actions---------------------------------------------------------------------

void WrongCat::makeSound(void) const
{
	std::cout << "Meeoow Meeoow" << std::endl;
}
