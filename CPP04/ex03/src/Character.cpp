/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:08:51 by user42            #+#    #+#             */
/*   Updated: 2021/08/19 13:36:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// constructors/destructors----------------------------------------------------

Character::Character(void)
{
	for (int i = 0; i < INVENTORY_SIZE; ++i)
	{
		this->inventory[i] = 0;
	}
}

Character::Character(const Character & c): name(c.name)
{
	int i;

	// clone materia from c's inventory to this inventory
	for (i = 0; i < INVENTORY_SIZE && c.inventory[i] != 0; ++i)
	{
		this->inventory[i] = c.inventory[i]->clone();
	}
	// if inventory not full set remaining empty slots to 0
	for (; i < INVENTORY_SIZE; ++i)
	{
		this->inventory[i] = 0;
	}
}

Character::Character(const std::string name): name(name)
{
	for (int i = 0; i < INVENTORY_SIZE; ++i)
	{
		this->inventory[i] = 0;
	}
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY_SIZE && this->inventory[i] != 0; ++i)
	{
		delete this->inventory[i];
	}
}

// operators overload----------------------------------------------------------

Character & Character::operator=(const Character & rhs)
{
	int i;

	this->name = rhs.name;

	// clone materia from rhs's inventory to this inventory
	// delete old materia and replace by clone of rhs's materia
	for (i = 0; i < INVENTORY_SIZE && rhs.inventory[i] != 0; ++i)
	{
		delete this->inventory[i];
		this->inventory[i] = rhs.inventory[i]->clone();
	}
	// delete olds materia remaining and set to 0 for empty slots
	for (; i < INVENTORY_SIZE && this->inventory[i] != 0; ++i)
	{
		delete this->inventory[i];
		this->inventory[i] = 0;
	}
	return (*this);
}

// getters/setters-------------------------------------------------------------

std::string const & Character::getName() const
{
	return (this->name);
}

// actions---------------------------------------------------------------------

void Character::equip(AMateria * m)
{
	if (m == 0)
		return ;
	// find first empty slot if available and store the new materia, else do nothing
	for (int i = 0; i < INVENTORY_SIZE; ++i)
	{
		if (this->inventory[i] == 0)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= INVENTORY_SIZE || this->inventory[idx] == 0)
		return ;
	
	// unequip whithout deleting
	this->inventory[idx] = 0;
	
	// move every materia to the top of the inventory
	for (int i = idx + 1; i < INVENTORY_SIZE && this->inventory[i] != 0; ++i)
	{
		this->inventory[i-1] = this->inventory[i];
		this->inventory[i] = 0;
	}
}

void Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx >= INVENTORY_SIZE || this->inventory[idx] == 0)
		return ;
	this->inventory[idx]->use(target);
}
