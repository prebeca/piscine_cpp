/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:02:25 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 13:45:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Perceval");
	ClapTrap b("Arthur");
	ClapTrap c(b);
	
	std::cout << std::endl << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl << std::endl;

	std::cout << "c = a" << std::endl << std::endl;
	c = a;

	a.attack("Arthur");
	a.takeDamage(7);
	a.beRepaired(3);

	std::cout << std::endl << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl << std::endl;
	return 0;
}