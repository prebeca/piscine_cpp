/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:45:01 by user42            #+#    #+#             */
/*   Updated: 2021/06/30 13:51:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);
void    announceHorde(int horde_size, Zombie horde[]);

int main()
{
	int hordeSize = 42;

    Zombie *myHorde = zombieHorde(hordeSize, "Jeannette");

    announceHorde(hordeSize, myHorde);

	delete [] myHorde;
    return (0);
}