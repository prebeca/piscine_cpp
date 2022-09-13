/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:43:48 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:58:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
}

Cure::Cure(const Cure & c): AMateria("cure")
{
	(void)c;
}

Cure::~Cure()
{
}

Cure & Cure::operator=(const Cure & rhs)
{
	(void)rhs;
	return (*this);
}

AMateria * Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
