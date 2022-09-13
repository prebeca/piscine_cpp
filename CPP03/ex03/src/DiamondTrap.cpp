/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:52:39 by user42            #+#    #+#             */
/*   Updated: 2021/08/12 13:28:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructor/destructor------------------------------------------------------

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap created!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name + "_clap_name", 100, 50, 30), name(name)
{
	std::cout << "DiamondTrap " << this->name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & c): ClapTrap(c.name + "_clap_name", c.hitPoints, c.energyPoints, c.attackDamage), name(c.name)
{
	std::cout << "DiamondTrap " << this->name << " copied!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destroyed!" << std::endl;
}

// operators overload----------------------------------------------------------

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & c)
{
	this->name = c.name;
	this->ClapTrap::name = c.ClapTrap::name;
	this->hitPoints = c.hitPoints;
	this->energyPoints = c.energyPoints;
	this->attackDamage = c.attackDamage;
	return(*this);
}

std::ostream & operator<<(std::ostream& os, const DiamondTrap & c)
{
	os << "DiamondTrap " << c.getName() << " has " << c.getHitPoints() << " hit points left.";
	return (os);
}

// actions---------------------------------------------------------------------

void DiamondTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "DiamondTrap " << this->name << " was hit, taking " << amount <<
	" points of damage! He is now at " << this->hitPoints << " hit points!" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	std::cout << "DiamondTrap " << this->name << " is repaired by " << amount <<
	" hit points! He is now at " << this->hitPoints << " hit points!" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << name << " (AKA " << ClapTrap::name << ")" << std::endl;
}
