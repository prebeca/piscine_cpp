/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:56:01 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 15:05:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor/destructor----------------------------------------------------------

ClapTrap::ClapTrap(void): hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap created!" << std::endl;
}

ClapTrap::ClapTrap(const std::string name):
name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << this->name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & c):
name(c.name), hitPoints(c.hitPoints), energyPoints(c.energyPoints), attackDamage(c.attackDamage)
{
	std::cout << "ClapTrap " << this->name << " copied!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destroyed!" << std::endl;
}

// operators overload----------------------------------------------------------

ClapTrap & ClapTrap::operator=(const ClapTrap & c)
{
	this->name = c.name;
	this->hitPoints = c.hitPoints;
	this->energyPoints = c.energyPoints;
	this->attackDamage = c.attackDamage;
	return(*this);
}

std::ostream & operator<<(std::ostream& os, const ClapTrap & c)
{
	os << "ClapTrap " << c.getName() << " has " << c.getHitPoints() << " hit points left.";
	return (os);
}

// getters/setters-------------------------------------------------------------

std::string ClapTrap::getName(void) const
{
	return (this->name);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}

// actions---------------------------------------------------------------------

void ClapTrap::attack(const std::string & target)
{
	this->energyPoints -= 2;
	std::cout << "ClapTrap " << this->name << " attacks " << target <<
	", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " was hit, taking " << amount <<
	" points of damage! He is now at " << this->hitPoints << " hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " is repaired by " << amount <<
	" hit points! He is now at " << this->hitPoints << " hit points!" << std::endl;
}
