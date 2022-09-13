/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:25:43 by user42            #+#    #+#             */
/*   Updated: 2021/08/12 13:37:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructor/destructor------------------------------------------------------

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap created!" << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << this->name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap & c): ClapTrap(c.name, c.hitPoints, c.energyPoints, c.attackDamage)
{
	std::cout << "FragTrap " << this->name << " copied!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destroyed!" << std::endl;
}


// operators overload----------------------------------------------------------

FragTrap & FragTrap::operator=(const FragTrap & c)
{
	this->name = c.name;
	this->hitPoints = c.hitPoints;
	this->energyPoints = c.energyPoints;
	this->attackDamage = c.attackDamage;
	return(*this);
}

std::ostream & operator<<(std::ostream& os, const FragTrap & c)
{
	os << "FragTrap " << c.getName() << " has " << c.getHitPoints() << " hit points left.";
	return (os);
}

// actions---------------------------------------------------------------------

void FragTrap::attack(const std::string & target)
{
	this->energyPoints -= 2;
	std::cout << "FragTrap " << this->name << " attacks " << target <<
	", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "FragTrap " << this->name << " was hit, taking " << amount <<
	" points of damage! He is now at " << this->hitPoints << " hit points!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	std::cout << "FragTrap " << this->name << " is repaired by " << amount <<
	" hit points! He is now at " << this->hitPoints << " hit points!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give FragTrap " << this->name << " a High Five!!!" << std::endl;
}
