/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:38:48 by user42            #+#    #+#             */
/*   Updated: 2021/06/30 13:35:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : name(name)
{
}

Zombie::~Zombie()
{
    std::cout << name << " is definitly dead" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
