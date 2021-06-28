/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   names.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:24:36 by user42            #+#    #+#             */
/*   Updated: 2021/05/27 12:34:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "names.hpp"

std::string get_randomName()
{
    int numbersOfnames;
    int nameIndex;

    numbersOfnames = sizeof(g_names)/sizeof(g_names[0]);
    nameIndex= std::rand() % numbersOfnames;
    return (g_names[nameIndex]);
}