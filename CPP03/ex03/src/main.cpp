/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:02:25 by user42            #+#    #+#             */
/*   Updated: 2021/08/12 13:32:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("Arthur");
	DiamondTrap b("Perceval");
	DiamondTrap c(b);
	ClapTrap d("Merlin");
	
	std::cout << std::endl << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl << std::endl;

	a.whoAmI();
	c.whoAmI();
	std::cout << "(DiamondTrap)c = (DiamondTrap)a" << std::endl;
	c = a;
	a.whoAmI();
	c.whoAmI();

 	std::cout << std::endl;
	a.attack("Perceval");
	a.takeDamage(20);
	a.beRepaired(7);
	a.guardGate();
	a.highFivesGuys();
	a.whoAmI();
	
	std::cout << std::endl;
	d.attack("Arthur");
	d.takeDamage(7);
	d.beRepaired(3);

	std::cout << std::endl << "(ClapTrap)d = (DiamondTrap)a" << std::endl << std::endl;
	d = a;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl << std::endl;
	return 0;
}
