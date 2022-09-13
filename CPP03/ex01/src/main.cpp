/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:02:25 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 13:46:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("Arthur");
	ScavTrap b("Perceval");
	ScavTrap c(b);
	ClapTrap d("Merlin");
	
	std::cout << std::endl << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl << std::endl;

	std::cout << "(ScavTrap)c = (ScavTrap)a" << std::endl << std::endl;
	c = a;

	a.attack("Perceval");
	a.takeDamage(20);
	a.guardGate();
	a.beRepaired(7);
	
	std::cout << std::endl;
	d.attack("Arthur");
	d.takeDamage(7);
	d.beRepaired(3);

	std::cout << std::endl << "(ClapTrap)d = (ScavTrap)a" << std::endl << std::endl;
	d = a;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl << std::endl;
	return 0;
}
