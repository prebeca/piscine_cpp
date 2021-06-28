/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:38:48 by user42            #+#    #+#             */
/*   Updated: 2021/05/27 12:52:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
    announce();
}

Zombie::~Zombie()
{
}

void    Zombie::announce(void)
{
    std::cout << "<"<< name << " (" << type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

void    Zombie::set_name(std::string new_name)
{
    this->name = new_name;
}

void    Zombie::set_type(std::string new_type)
{
    this->type = new_type;
}
