/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:05:14 by user42            #+#    #+#             */
/*   Updated: 2021/08/18 17:06:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < MAX_KNOWN_MATERIA; ++i)
	{
		this->knownMateria[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource & c)
{
	int i;

	for (i = 0; i < MAX_KNOWN_MATERIA && c.knownMateria[i] != 0; ++i)
	{
		this->knownMateria[i] = c.knownMateria[i]->clone();
	}
	for (; i < MAX_KNOWN_MATERIA; ++i)
	{
		this->knownMateria[i] = 0;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX_KNOWN_MATERIA && this->knownMateria[i] != 0; ++i)
	{
		delete this->knownMateria[i];
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource & rhs)
{
	int i;
	
	for (i = 0; i < MAX_KNOWN_MATERIA && rhs.knownMateria[i] != 0; ++i)
	{
		delete this->knownMateria[i];
		this->knownMateria[i] = rhs.knownMateria[i]->clone();
	}
	for (; i < MAX_KNOWN_MATERIA; ++i)
	{
		delete this->knownMateria[i];
		this->knownMateria[i] = 0;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < MAX_KNOWN_MATERIA; ++i)
	{
		if (this->knownMateria[i] == 0)
		{
			this->knownMateria[i] = m->clone();
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX_KNOWN_MATERIA && this->knownMateria[i] != 0; ++i)
	{
		if (this->knownMateria[i]->getType().compare(type) == 0)
			return (this->knownMateria[i]->clone());
	}
	return (0);
}
