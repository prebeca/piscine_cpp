/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:45:01 by user42            #+#    #+#             */
/*   Updated: 2021/05/27 12:27:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
    Zombie *myZombie = 0;

    std::srand(std::time(0));

    ZombieEvent::randomChump();
    ZombieEvent::randomChump();
    ZombieEvent::randomChump();

    ZombieEvent::setZombieType("Custom Zombie");

    myZombie = ZombieEvent::newZombie("Carl");
    delete myZombie;
    myZombie = ZombieEvent::newZombie("Maxime");
    delete myZombie;
    myZombie = ZombieEvent::newZombie("Jeanne");
    delete myZombie;

    return (0);
}