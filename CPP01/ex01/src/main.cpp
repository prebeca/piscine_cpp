/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:45:01 by user42            #+#    #+#             */
/*   Updated: 2021/07/28 11:02:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define HORDE_SIZE 5

Zombie *zombieHorde(int N, std::string name);
void    announceHorde(int horde_size, Zombie horde[]);

int main()
{
    Zombie *myHorde = zombieHorde(HORDE_SIZE, "Jeannette");

    announceHorde(HORDE_SIZE, myHorde);

	delete [] myHorde;
    return (0);
}