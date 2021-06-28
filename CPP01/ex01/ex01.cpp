/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:00:23 by user42            #+#    #+#             */
/*   Updated: 2021/05/26 15:04:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak()
{
    std::string *panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete panthere;
}

int main()
{
    memoryLeak();
    return (0);
}