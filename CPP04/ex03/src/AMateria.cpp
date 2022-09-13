/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:13:39 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 16:51:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): type("none")
{
}

AMateria::AMateria(const AMateria & c)
{
	(void)c;
}

AMateria::AMateria(const std::string & type): type(type)
{
}

AMateria::~AMateria()
{
}

AMateria & AMateria::operator=(const AMateria & rhs)
{
	(void)rhs;
	return (*this);
}

const std::string & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}