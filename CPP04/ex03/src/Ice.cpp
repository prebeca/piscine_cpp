/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:43:25 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:55:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
}

Ice::Ice(const Ice & c): AMateria("ice")
{
	(void)c;
}

Ice::~Ice()
{
}

Ice & Ice::operator=(const Ice & rhs)
{
	(void)rhs;
	return (*this);
}

AMateria * Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}