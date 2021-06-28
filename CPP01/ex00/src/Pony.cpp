/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:14:34 by user42            #+#    #+#             */
/*   Updated: 2021/06/24 18:25:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color) : name(name), color(color)
{
    std::cout << "A wild " << color << " pony named " << name << " spawned !" << std::endl;
}

Pony::~Pony()
{
    std::cout << "Pony " << name << " just died :( RIP." << std::endl;
}

std::string Pony::to_string()
{
    std::string output_string;

    output_string = name;
    output_string += " the little ";
    output_string += color;
    output_string += " pony is living a happy life...";
    return (output_string);
}
