/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:20:22 by user42            #+#    #+#             */
/*   Updated: 2021/05/31 14:06:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type): type(type)
{
}

Weapon::~Weapon()
{
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void				Weapon::setType(std::string type)
{
	this->type = type;
}
