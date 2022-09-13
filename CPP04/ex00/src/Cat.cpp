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

Cat::Cat(void): Animal("Cat")
{
	std::cout << "A new Cat is created !" << std::endl;
}

Cat::Cat(const Cat & c): Animal(c.type)
{
	std::cout << "A new Cat is created by copy !" << std::endl;
}

Cat::~Cat()
{
	std::cout << "A Cat is deleted !" << std::endl;
}

// operator overload-----------------------------------------------------------

Cat & Cat::operator=(const Cat & rhs)
{
	this->type = rhs.getType();
	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Cat & rhs)
{
	std::cout << "This Cat is a/an " << rhs.getType();
	return (os);
}

// actions---------------------------------------------------------------------

void Cat::makeSound(void) const
{
	std::cout << "Meeoow Meeoow" << std::endl;
}
