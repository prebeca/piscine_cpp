/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:25:43 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 15:06:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructor/destructor------------------------------------------------------

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap created!" << std::endl;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << this->name << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & c): ClapTrap(c.name, c.hitPoints, c.energyPoints, c.attackDamage)
{
	std::cout << "ScavTrap " << this->name << " copied!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " destroyed!" << std::endl;
}


// operators overload----------------------------------------------------------

ScavTrap & ScavTrap::operator=(const ScavTrap & c)
{
	this->name = c.name;
	this->hitPoints = c.hitPoints;
	this->energyPoints = c.energyPoints;
	this->attackDamage = c.attackDamage;
	return(*this);
}

std::ostream & operator<<(std::ostream& os, const ScavTrap & c)
{
	os << "ScavTrap " << c.getName() << " has " << c.getHitPoints() << " hit points left.";
	return (os);
}

// actions---------------------------------------------------------------------

void ScavTrap::attack(const std::string & target)
{
	this->energyPoints -= 2;
	std::cout << "ScavTrap " << this->name << " attacks " << target <<
	", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "ScavTrap " << this->name << " was hit, taking " << amount <<
	" points of damage! He is now at " << this->hitPoints << " hit points!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	std::cout << "ScavTrap " << this->name << " is repaired by " << amount <<
	" hit points! He is now at " << this->hitPoints << " hit points!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " has enterred Gate Keeper mode!!!" << std::endl;
}
