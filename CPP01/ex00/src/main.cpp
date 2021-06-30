/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:45:01 by user42            #+#    #+#             */
/*   Updated: 2021/06/30 13:55:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
    Zombie *myZombie = 0;

    randomChump("Louis");
    randomChump("Martine");
    randomChump("George");

    myZombie = newZombie("Carl");
	myZombie->announce();
    delete myZombie;
    myZombie = newZombie("Maxime");
	myZombie->announce();
    delete myZombie;
    myZombie = newZombie("Jeanne");
	myZombie->announce();
    delete myZombie;

    return (0);
}