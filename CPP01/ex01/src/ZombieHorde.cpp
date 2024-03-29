/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:15:17 by user42            #+#    #+#             */
/*   Updated: 2021/07/27 16:53:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    int i;

	if (N < 0)
		return (NULL);
	Zombie *horde = new Zombie[N];
    i = 0;
    while (i < N)
    {
        horde[i].set_name(name);
		++i;
    }
	return (horde);
}

void    announceHorde(int horde_size, Zombie horde[])
{
    int i;

    if (!horde)
        return ;
    i = 0;
    while (i < horde_size)
        horde[i++].announce();
}
