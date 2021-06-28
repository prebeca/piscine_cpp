/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:57:24 by user42            #+#    #+#             */
/*   Updated: 2021/06/24 18:39:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string ZombieEvent::type = "Basic Zombie";

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void    ZombieEvent::setZombieType(std::string newType)
{
    ZombieEvent::type = newType;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, ZombieEvent::type));
}

void    ZombieEvent::randomChump(void)
{
    Zombie  new_zombie = Zombie(get_randomName(), ZombieEvent::type);
}
