/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:02:25 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 14:55:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("Arthur");
	FragTrap b("Perceval");
	FragTrap c(b);
	ClapTrap d("Merlin");
	
	std::cout << std::endl << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl << std::endl;

	std::cout << "(FragTrap)c = (FragTrap)a" << std::endl << std::endl;
	c = a;

	a.attack("Perceval");
	a.takeDamage(20);
	a.highFivesGuys();
	a.beRepaired(7);
	
	std::cout << std::endl;
	d.attack("Arthur");
	d.takeDamage(7);
	d.beRepaired(3);

	std::cout << std::endl << "(ClapTrap)d = (FragTrap)a" << std::endl << std::endl;
	d = a;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl << std::endl;
	return 0;
}
