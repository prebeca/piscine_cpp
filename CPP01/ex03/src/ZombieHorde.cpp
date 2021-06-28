/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:15:17 by user42            #+#    #+#             */
/*   Updated: 2021/06/24 18:41:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : horde_size(n)
{
    int i;

    horde = new Zombie[horde_size];
    i = 0;
    while (i < horde_size)
    {
        horde[i].set_name(get_randomName());
        horde[i].set_type("base type");
		++i;
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] horde;
}

void    ZombieHorde::announce(void)
{
    int i;

    if (!horde)
        return ;
    i = 0;
    while (i < horde_size)
        horde[i++].announce();
}
